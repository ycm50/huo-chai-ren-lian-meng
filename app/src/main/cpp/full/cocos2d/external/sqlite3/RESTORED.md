# SQLite 3.8.4.3 amalgamation —— 恢复说明 (2026-10-15)

## 为什么需要它

原版 `libcocos2dcpp.so`（`work/apktool_out/lib/armeabi/libcocos2dcpp.so`, 11,820,992 字节）
**静态内嵌**了完整 SQLite：`.dynsym` 里有 **223** 个含 "sqlite" 的**已定义**符号
（其中 209 个以 `sqlite3_` 开头，bind=GLOBAL、type=FUNC、落在 `.text`）。
恢复出的工程里 `cocos2d/external/sqlite3/` 只剩 `include/sqlite3ext.h` 和
`sqlite3.h.REMOVED.git-id` 占位符，`engine/cocos2d-x-2.2.2` 那份也一样 —— **没有任何实现源码**，
NDK sysroot 也不提供 sqlite。

后果：`Classes/ItemData.cpp` 里的 `sqlite3_get_table` / `sqlite3_free_table` 没有定义，
`.so` 带着 undefined 符号，`dlopen` 阶段直接
`UnsatisfiedLinkError: cannot locate symbol "sqlite3_get_table"`。
（`cocos2d/extensions/LocalStorage/LocalStorage.cpp` 虽然也用 sqlite，但整个文件体在
`#if (CC_TARGET_PLATFORM != CC_PLATFORM_ANDROID)` 里，Android 下不参与编译。）

## 版本是怎么定出来的（不是猜的）

从原版 `.so` 的字符串里直接读到它内嵌的 SQLite 标识：

| 来源 | 内容 |
|---|---|
| `sqlite3_version` 符号处（vaddr 0xa4c5ae, size 8） | `3.8.4.3` |
| `sqlite3_sourceid` 返回的字符串 | `2014-04-03 16:53:12 a611fa96c4a848614efe899130359c9f6fb889c3` |
| `sqlite3_compileoption_get` 表 | `HAS_CODEC`、`SYSTEM_MALLOC`、`THREADSAFE=1` |

下载的同版本官方 amalgamation（`https://www.sqlite.org/2014/sqlite-amalgamation-3080403.zip`）
其 `SQLITE_SOURCE_ID` 与上面**逐字节相同**，因此版本可确认为 3.8.4.3。

## 新增文件

| 文件 | 大小 | SHA-256 |
|---|---|---|
| `cocos2d/external/sqlite3/sqlite3.c` | 5175934 | `d58ef7e6bfda7f4c48e62860aebe17d045086f6e8ce6d22e278154f38600ccdd` |
| `cocos2d/external/sqlite3/include/sqlite3.h` | 355882 | `ca69c248b37e51847e566e85d5c3ca6e72a7e0016a4ddd5f799ce7a6c4c03f36` |

（`sqlite3ext.h` 保留仓库里原有的那份，未改动；`*.REMOVED.git-id` 占位符保留未动。）

## 构建接线

`full/CMakeLists.txt` 在 `add_library()` 之前显式追加该文件：

```cmake
set(COCOS2D_SQLITE3_C ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/sqlite3/sqlite3.c)
if(NOT EXISTS ${COCOS2D_SQLITE3_C})
  message(WARNING "...")
else()
  list(FIND C_SRC "${COCOS2D_SQLITE3_C}" _sqlite3_idx)   # 去重: GLOB 重新 configure 时也会命中
  if(_sqlite3_idx EQUAL -1)
    list(APPEND C_SRC ${COCOS2D_SQLITE3_C})
  endif()
endif()
```

之所以不能只靠第 123 行的 `file(GLOB_RECURSE C_SRC ...)`：GLOB 在**配置期**求值，
新增 `.c` 文件不会让增量构建重新扫描，会静默漏编。显式追加 + FIND 去重保证
「一定编到」且「只编一次」（重复会让 ninja 报 multiple rules）。

同时删除了 `Classes/_missing_impls.cpp` 里那段假的
`sqlite3_get_table`/`sqlite3_free_table`（返回 `SQLITE_ERROR` 的空实现）——
留着会和 amalgamation 撞重复符号。

## 注意：不要定义 SQLITE_HAS_CODEC

原版 .so 里另有一层 **SQLite 加密 codec**（`sqlite3Codec`、`sqlite3CodecAttach`、
`sqlite3CodecFree`、`sqlite3CodecGetKey`、`sqlite3CodecSizeChange`、`sqlite3_key`、
`sqlite3_key_v2`、`sqlite3_rekey`、`sqlite3_rekey_v2`、`sqlite3_activate_see`，
外加 `CodecRC4`/`CodecAES`/`CodecGetMD5Binary`/`CodecGetSHABinary`/`mySqlite3PagerSetCodec`
等，共 14 个额外导出）—— 这就是 `HAS_CODEC` 编译选项的由来，源码**未恢复**。

**因此本工程刻意不定义 `SQLITE_HAS_CODEC`。** 一旦定义，主干 `sqlite3.c` 的
`sqlite3Pragma()` 会调用 `sqlite3_key_v2` / `sqlite3_rekey_v2` / `sqlite3_activate_see`，
pager 层会调用 `sqlite3CodecAttach` / `sqlite3CodecGetKey`，而这些符号不存在 ——
又会变成 dlopen 找不到符号（已实测，见下）。

## 验证记录

1. **交叉编译**（NDK r26.1，`--target=armv7a-linux-androideabi21`）：`sqlite3.c` 编译
   **exit 0**，只有 3 条无害警告（`nCompound` 未用、2 条 int64→double 隐式转换）。
2. **符号对照**：把编出的 `.o` 与原版 .so 的 209 个 `sqlite3_*` 逐个对照，
   只缺 10 个，且**恰好**是 codec 那一层（上节列出的 5 个 `sqlite3_*` + 5 个 `sqlite3Codec*`）；
   `.o` 里 **没有任何 undefined 的 `sqlite3_*` 符号**。
3. **宿主机功能实测**（msys2 ucrt64 gcc，直接编译本目录的 `sqlite3.c` 并运行）：
   ```
   sqlite3_version[]  = '3.8.4.3'
   sqlite3_sourceid   = '2014-04-03 16:53:12 a611fa96c4a848614efe899130359c9f6fb889c3'
   sqlite3_get_table rc=0 nrow=3 ncol=2
      cell[0..7] = 'id','name','10001','sword','10002','shield','10003','potion'
   sqlite3_get_table(bad SQL) rc=1 nrow=0 ncol=0 err=no such table: no_such_table
   ```
   结果数组布局（`(nrow+1)*ncol`，首行是列名）与 `ItemData::GetAllEquip` 的读取方式一致。
4. **反向验证 `SQLITE_HAS_CODEC`**：加上 `-DSQLITE_HAS_CODEC` 后链接报
   `undefined reference to 'sqlite3CodecAttach' / 'sqlite3CodecGetKey' /
   'sqlite3_key_v2' / 'sqlite3_rekey_v2' / 'sqlite3_activate_see'` ——
   证实上面「不要定义 HAS_CODEC」的结论。
5. **其它 .so 依赖检查**：APK 里其余 14 个第三方 native 库（`libBugly`/`libmg20pbase`/…）
   和 `libmgRun_05.22.09_01.so` 的动态符号表里 **sqlite 符号数 = 0**，
   即没有任何兄弟库 `dlsym` 这些 codec 符号，codec 缺失不会在加载期影响它们。
6. **工程内真实构建**（cmake configure + ninja，NDK r26.1，armeabi-v7a/android-21；不是 gradle）：
   sqlite 相关的 3 个 TU **全部编译通过**：

   | 目标 | 结果 | 大小 |
   |---|---|---|
   | `cocos2d/external/sqlite3/sqlite3.c.o` | exit 0 | 2,115,292 B |
   | `Classes/ItemData.cpp.o` | exit 0 | 198,092 B |
   | `Classes/_missing_impls.cpp.o` | exit 0 | 579,360 B |

   符号归属也核对过：`ItemData.cpp.o` 里 `U sqlite3_get_table` / `U sqlite3_free_table`
   正好由 `sqlite3.c.o` 的 `T sqlite3_get_table` / `T sqlite3_free_table` 提供（链接期可解析）；
   `_missing_impls.cpp.o` 提供 `T sqlite3_key` / `T sqlite3_key_v2` / `T sqlite3_rekey` /
   `T sqlite3_rekey_v2` / `T sqlite3_activate_see`。
   这三个 .o 里**没有任何未被定义的 `sqlite3_*`**。
7. **从零全量 ninja 构建（ninja -k 0，共 247.4 s，1384 个构建步骤）**：
   **与 SQLite 相关的一切都通过；当前无法一跑到底的原因全部在 `Classes/` 里正在并行恢复的游戏类。**

   - 失败目标：**7 个，全部在 `Classes/`，且失败目标里含 sqlite 字样的数量 = 0**；
     这 7 个文件本身 `sqlite3` 引用数也全为 0：

     | 失败文件 | 首条错误 |
     |---|---|
     | `Classes/AchievementItemData.cpp` | `no matching member function for call to 'operator='` (201) |
     | `Classes/BLFurnaceSelectPresenter.cpp` | `no matching conversion for C-style cast from 'undefined4'` (533) |
     | `Classes/CCJson.cpp` | `use of undeclared identifier '__gnu_thumb1_case_uqi'` (52) |
     | `Classes/JiTanDataGet.cpp` | `no member named 'singleton' in namespace 'sir'` (114) |
     | `Classes/LuckyDrawData.cpp` | `cannot refer to type member 'Stack' in 'rapidjson::internal::...'` (138) |
     | `Classes/RoleRenascenceItemData.cpp` | `expression is not assignable` (177) |
     | `Classes/ZhancheData.cpp` | （同批 `Classes/` 恢复错误） |

   - `cocos2d/external/sqlite3/sqlite3.c.o`、`Classes/ItemData.cpp.o`、`Classes/_missing_impls.cpp.o`
     三个目标在本次全量构建后**产物都在**（2,115,292 / 198,092 / 579,360 字节）。
   - 因为还有那 7 个编译失败，**链接阶段未执行**，`libcocos2dcpp.so` 未产出 —— 所以「全量构建通过」这一条
     在 `Classes/` 恢复完之前无法验证，但它与 SQLite 无关。
   - 注意：本次 sweep 运行期间 `Classes/` 正在被并行修改，个别失败可能是瞬态的；
     但无论瞬态与否，都不涉及 sqlite。
## 加密 codec：现状与处理（重要）

原版 .so 里那层 codec 是**真的在用**的：`work/full-src/game_decompiled*.cpp` 里可见
`sqlite3_open` 5+8 处、`sqlite3_key` 1+2 处、`sqlite3_rekey` 8+10 处调用，
涉及的类有 `UserData`、`DataManager`、`DBUtil`、`BLUpAndDownUtils`、`GMSpecDataGet`
（逐类逐函数清单见 `work/full-src/SQLITE_DECLS.md`，共 76 类 / 116 函数）。

`UserData.cpp` 里那条数据库路径（该文件恢复时的反编译形态）：

```
UserData::initDB()            // UserData.cpp:2063 附近
    iVar2 = sqlite3_open(uStack_34, this + 0x14);           // 2094
    if (iVar2 == 0) {
      DataManager::getDBKey(...);                           // 2099/2101 取密钥
      iStack_40 = sqlite3_rekey(uVar6, uStack_2c, uVar3);    // 2103
      while (true) {                                        // 2105 无上限重试！
        if (iStack_40 == 0) break;                          // 2107
        CCMessageBox(...);                                  // 2111 失败就弹框
        iStack_40 = sqlite3_rekey(uVar7, uVar3, uVar6);      // 2120 换 key 再试
      }
    }
    sqlite3_close(...);                                     // 2124
```

（附带说明：该形态的 `UserData.cpp` 当时因缺声明/指针类型不匹配而无法编译，已被回滚成
不含 sqlite 调用的可编译版本；上面这段是将来正式恢复该类时的**行为依据**。）

因此 **`sqlite3_rekey` 返回非 0 会让 `initDB()` 死循环弹框**，只有返回 `SQLITE_OK`(0) 才能往下走
（另一个调用点 `UserData.cpp:3290` 才有 4 次上限）。

codec 源码随 .so 丢失：它是 SEE/wxSQLite3 系的 `sqlite3codec.c`（`CodecAES`/`CodecRC4`/
`CodecGenerateEncryptionKey`/`CodecPadPassword`/`sqlite3CodecAttach`/`mySqlite3PagerSetCodec` …），
而 `sqlite3_activate_see` 在原版里只有 **2 字节 = 空函数**，说明它不是官方 SEE。
本地库又是运行时自建/由服务端下发数据导入，不参与跨端交换，所以当前采取**「可用优先」**：

> 在 `Classes/_missing_impls.cpp` 末尾提供 codec 入口的**占位实现**：
> `sqlite3_key` / `sqlite3_key_v2` / `sqlite3_rekey` / `sqlite3_rekey_v2` 一律返回 `SQLITE_OK`(0)
> （即**不加密**），`sqlite3_activate_see` 空实现。
> 整段用 `#ifndef DLOL_NO_SQLITE_CODEC_SHIM` 包住，加 `-DDLOL_NO_SQLITE_CODEC_SHIM` 即可关闭。

目的只有一个：让 .so **不再有 undefined 的 `sqlite3_*` 符号**（否则又是 dlopen
`cannot locate symbol "sqlite3_rekey"`）。代价是本地 SQLite 库变成**明文**。
将来若真把 codec 从原版 .so 移植回来，删掉那段占位即可。

## 遗留（未做，属另一件事）

- **恢复这些类时要补声明**：`UserData`、`DataManager`、`DBUtil`、`BLUpAndDownUtils`、`GMSpecDataGet`、
  `BackPackData`、`ImmortalsRoleData` 等 —— 全树没有头文件 `include <sqlite3.h>`（只有 `ItemData.cpp`
  自带 2 条 extern），逐类清单和可直接复制的声明块见 `work/full-src/SQLITE_DECLS.md`；
  参数还要按项目里 R1/R4 规则补 `(sqlite3**)` / `(void*)` / `(const void*)` 转换。
  注意 `sqlite3.h` 只在定义了 `SQLITE_HAS_CODEC` 时才声明 `sqlite3_key`/`sqlite3_rekey`。
- 「物品表/用户数据真正读出来」还依赖 `PlatformHelp::copyFileToPathAndDecrypt` 等上游数据准备函数
  以及服务端下发的表数据 —— 不在本次 SQLite 恢复范围内。
- 落盘数据的加密与否无法比对：`work/full-src/GAME_RESTORE.md` §七记录 APK/设备/全项目 11645 文件
  的 SQLite 魔数扫描 **0 命中**，没有明文库样本。
- `work/full-src/GAME_RESTORE.md` §十三 仍写着「当前给出安全空实现」，已过时，建议同步更新为
  「已补入 SQLite 3.8.4.3 amalgamation；加密 codec 仍未恢复，见 cocos2d/external/sqlite3/RESTORED.md」。
- 全量 ninja 构建目前仍有 7 个 `Classes/` 编译失败（见「验证记录」第 7 条），与 sqlite 无关。
