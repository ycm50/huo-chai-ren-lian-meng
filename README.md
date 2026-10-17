# 火柴人联盟 (DiabloLOL) — 逆向重建与混合 Patch 工程

本仓库是对 Android 游戏 **火柴人联盟**（`com.DBGame.DiabloLOL` v1.18.1，cocos2d-x 2.2.2）
的正向**重建源码树**，以及一套**不修改原版原生库**的 **混合式 Patch 框架**（`libpatch.so`）。

> **重要声明**
> 本项目仅用于**个人学习与研究**：逆向工程、C++/NDK 内联 Hook、Android 构建流程。
> 游戏本体、美术资源、音频、第三方支付/统计 SDK 的二进制**均不包含在本仓库中**，
> 也不会被分发。请勿用于商业用途或任何违反当地法律与游戏用户协议的场景。
> 使用本仓库内容所产生的一切后果由使用者自行承担。

---

## 1. 这是什么

原始游戏只发行了**剥离符号的** `libcocos2dcpp.so`（11.8 MB）。本项目从零重建了它的源码骨架，
并设计了一条**可以安全叠加自定义逻辑、又不动原版二进制**的路线：

```
                    ┌──────────────────────────────┐
   Java 层          │  DiabloLOL.java              │
   （游戏 Activity）│    System.loadLibrary("patch")      ← 先加载我们
                    │    System.loadLibrary("cocos2dcpp")  ← 再加载原版
                    └──────────────┬───────────────┘
                                   │
          ┌────────────────────────┴────────────────────────┐
          │                                                 │
   ┌──────▼───────┐                                 ┌───────▼────────┐
   │ libpatch.so  │  ← 本仓库源码构建                │ libcocos2dcpp  │
   │ （我们的逻辑）│     app/src/main/cpp/patch/      │ .so（原版）     │
   │              │                                  │ 完全未改动      │
   └──────┬───────┘                                  └───────┬────────┘
          │  内联 Hook（capture4）                            │
          └──────────────► 接管/旁路指定函数 ◄───────────────┘
```

**为什么必须“混合”而不是整个重编一个 `.so`？**
原版 `libcocos2dcpp.so` 内部的调用几乎全是**直接绑定**（PC 相对 `bl`），
先加载哪个库都**无法通过符号插桩（interposition）**劫持它 —— 这一点已实测确认。
因此唯一可靠的接管手段是**内联 Hook**（改写目标函数入口的机器码）。

---

## 2. 目录结构

```
.
├── README.md
├── .gitignore
├── build.gradle                  # 根构建脚本（AGP 8.5.2）
├── settings.gradle
├── gradle.properties
├── gradle/wrapper/               # wrapper 配置（jar 见「构建」一节）
└── app/
    ├── build.gradle              # app 模块：compileSdk 35 / minSdk 21 / targetSdk 24
    └── src/main/
        ├── AndroidManifest.xml
        ├── res/                  # 重建的少量资源（图标、样式、字符串）
        ├── assets/               # ★ 已入库：原版游戏数据（约 103 MB）
        ├── jniLibs/              # ★ 已入库：原版 + 第三方 .so（16 个，约 13.5 MB）
        ├── java/                 # 重建的 Java 层（118 个文件）
        │   └── com/DBGame/DiabloLOL/
        │       ├── DiabloLOL.java        # 主 Activity（含 loadLibrary 顺序）
        │       ├── CmgameApplication.java
        │       ├── ModMenu.java          # ★ 悬浮菜单（Java 侧交互）
        │       ├── ModMenuFiles.java     # ★ 配置文件读写
        │       └── ItemPicker.java       # ★ 物品表浏览/发放
        └── cpp/
            ├── CMakeLists.txt            # 重建的原生层（可选，非出货路径）
            ├── full/                     # 重建的 cocos2d-x + 游戏 C++ 源码树
            └── patch/                    # ★★★ 本项目的核心：libpatch.so
                ├── CMakeLists.txt
                └── patch_functions.cpp
```

`★` 标记的是本仓库**原创**的内容；其余为从二进制重建出来的骨架。

---

## 3. 构建

### 3.1 环境要求

| 组件 | 版本（本项目实测通过） |
|---|---|
| JDK | 17 |
| Gradle | 8.7 ～ 8.14.4 |
| Android Gradle Plugin | 8.5.2 |
| Android SDK | compileSdk 35、build-tools 最新 |
| NDK | `26.1.10909125` |
| CMake | `3.22.1`（NDK 自带） |

`gradle/wrapper/gradle-wrapper.jar`、`gradlew`、`gradlew.bat` **均已入库**，
命令行直接 `./gradlew assembleDebug` 即可，无需先生成 wrapper。

用 Android Studio 打开时，它会自动生成 `local.properties`（指向本机 SDK）；
若用命令行构建，需要自己创建一份：

```properties
sdk.dir=C\:\\Users\\<你的用户名>\\AppData\\Local\\Android\\Sdk
```

### 3.2 原生库（已入库，无需处理）

`app/src/main/jniLibs/armeabi-v7a/` 下的 **16 个 `.so` 已随仓库提供**（约 13.5 MB），
包含原版 `libcocos2dcpp.so`（`MD5 844A8DA7DCC65F8E39FDF518017E1F27`，11 820 992 B，
导出 43 917 个符号）与全部第三方 SDK。

**克隆下来即可直接构建，不必再去翻原版 APK。**

| 文件 | 大小 | 说明 |
|---|---|---|
| `libcocos2dcpp.so` | 11,820,992 | 原版游戏库，本方案的前提（**代码零改动**） |
| `libpatch.so` | 320,316 | 本工程 `cpp/patch/` 的**预编译**产物（方便直接用；改源码后见 §3.3 重新生成并覆盖） |
| 其余 14 个 | 合计约 1.7 MB | 第三方 SDK：支付/统计/推送/微信等 |

> 校验原版库是否完好：
> ```bash
> md5sum app/src/main/jniLibs/armeabi-v7a/libcocos2dcpp.so
> # 期望：844a8da7dcc65f8e39fdf518017e1f27
> ```
> 若这个哈希变了，说明用的不是原版（例如误换成了整库重编的产物），
> 混合方案的前提即被破坏。
>
> ABI 说明：原版 APK 内的目录名是 `armeabi`（ARMv5）；本工程为适配 NDK r26
> 统一放到 `armeabi-v7a`（ARMv5 代码在 ARMv7 上可原样运行），
> 与 `build.gradle` 的 `abiFilters 'armeabi-v7a'` 对应。

### 3.2b 游戏资源（`assets/`，已入库）

`app/src/main/assets/` 约 103 MB（2519 个文件：美术、音频、图集、关卡数据）**已随仓库提供**，
克隆后即可直接打包出**可运行**的 APK，无需再去找原版 APK。

> 仓库整体约 120 MB，首次 `git clone` 会比较慢，请耐心等待（或加 `--depth 1`）。

### 3.2c 用 Android Studio 直接打开并运行（推荐）

```bash
git clone https://github.com/ycm50/huo-chai-ren-lian-meng.git
# 或：git clone --depth 1 <同上>
```

1. **File → Open**，选择克隆出来的目录（含 `settings.gradle` 的那一层）。
2. 首次同步时 Android Studio 会自动生成 `local.properties`（指向本机 SDK）；
   若提示缺 SDK，在 *Settings → Languages & Frameworks → Android SDK* 里指定即可。
3. 需要 **JDK 17**（*Settings → Build, Execution, Deployment → Build Tools → Gradle → Gradle JDK*）。
4. 等待 Gradle Sync 完成 → 连接设备 → 点 **Run ▶** 即可安装运行。

**已随仓库准备好、无需额外操作的东西：**

| 项 | 说明 |
|---|---|
| `gradlew` / `gradlew.bat` / `gradle-wrapper.jar` | Gradle Wrapper 8.7，Android Studio 直接可用 |
| `app/src/main/assets/` | 游戏资源，103 MB |
| `app/src/main/jniLibs/armeabi-v7a/*.so` | 原版 + 第三方原生库，16 个 |
| `app/build.gradle` 的 `targetSdk 24` | 已设好（见下方说明） |

> ⚠️ **`targetSdk` 不要改**：调到 24 以下，Android 14+ 会拒绝全新安装
> （`INSTALL_FAILED_DEPRECATED_SDK_VERSION`）；调到 29 以上，会触发分区存储，
> patch 依赖的 `/sdcard/dsh_*.txt` 配置文件将读不到。

### 3.3 编译 `libpatch.so`（核心产物）

```bash
NDK=$ANDROID_SDK/ndk/26.1.10909125
CMAKE=$ANDROID_SDK/cmake/3.22.1/bin/cmake

$CMAKE -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake \
  -DANDROID_ABI=armeabi-v7a \
  -DANDROID_PLATFORM=android-19 \
  -DCMAKE_BUILD_TYPE=Release \
  -S app/src/main/cpp/patch -B build-patch

$CMAKE --build build-patch
cp build-patch/libpatch.so app/src/main/jniLibs/armeabi-v7a/
```

### 3.4 打包 APK

```bash
gradle assembleDebug
# 产物：app/build/outputs/apk/debug/app-debug.apk
```

> ⚠️ **`targetSdk = 24` 是刻意设的**：Android 14+ 对全新安装会拒绝
> `targetSdk < 24`（`INSTALL_FAILED_DEPRECATED_SDK_VERSION`）。
> 同时**不要提高到 29+**，否则触发分区存储，`/sdcard` 配置文件读写会失效。

### 3.5 签名与安装

一个工程**只用一把 keystore**，才能长期 `-r` 覆盖安装而不丢存档：

```bash
keytool -genkeypair -keystore test.keystore -alias testkey -keyalg RSA -keysize 2048 \
  -validity 10000 -storepass 123456 -keypass 123456 \
  -dname "CN=app,OU=game,O=game,L=City,ST=State,C=CN"

zipalign -f -p 4 app-debug.apk aligned.apk
apksigner sign --ks test.keystore --ks-key-alias testkey \
  --ks-pass pass:123456 --key-pass pass:123456 \
  --v1-signing-enabled true --v2-signing-enabled true --v3-signing-enabled true \
  --out signed.apk aligned.apk

adb push signed.apk /data/local/tmp/x.apk        # 必须走这里，/sdcard 是 FUSE
adb shell pm install -r -t -g /data/local/tmp/x.apk
```

**Android 15/16 注意**：全新安装会弹出系统确认框
（“安装此应用，将自动设置以下权限 … [取消][安装]”），
`pm install` 会**一直挂在那里等这一次点击**。请先唤醒屏幕再点“安装”。

---

## 4. Patch 框架（`app/src/main/cpp/patch/`）

### 4.1 内联 Hook 原理（`capture4`）

对目标函数入口写一条 4 字节 `b.w` 跳到**附近**（±16 MB）页内分配的桩：

```
目标入口                        桩（运行期 mmap 到目标附近）
┌──────────────────┐           ┌─────────────────────────────────┐
│ b.w  →  桩       │  4 字节   │ +0  原函数前 4 字节（原样保留）  │
│ （原有指令被覆盖）│ ────────► │ +4  ldr.w r12, [pc, #0]         │
└──────────────────┘           │ +8  .word  entry+4  → r12       │
                               │ +12 8 字节绝对跳转 → 我们的桩    │
                               └─────────────────────────────────┘
我们的桩（naked）：
    push {r0, r1, r2, r3, r4, lr}
    mov  r4, r12                 ← 续跑地址存进 callee-saved 寄存器
    bl   rec_xxx                 ← 记录 r0（this）
    pop  {r0, r1, r2, r3, r4, lr}
    bx   r4                      ← 回到 entry+4，原逻辑继续执行
```

要点：
* 目标函数**前 4 字节必须无 PC 相对指令**，否则不能切片（安装前会校验）。
* 续跑地址必须存在 **callee-saved** 寄存器里（`bl` 会破坏 `r12`）。
* 桩页用 `MAP_FIXED_NOREPLACE`，避免覆盖原版 `.so` 的映射。

### 4.2 配置文件开关（全部 opt-in）

所有能力**默认关闭**，游戏行为与原版完全一致；在 `/sdcard` 放置文件才启用：

| 文件 | 作用 | 格式 |
|---|---|---|
| `/sdcard/dsh_hooks.txt` | 启用入口 Hook | 每行一个 token，或 `all` |
| `/sdcard/dsh_show.txt` | 入口常显 | 存在即启用 |
| `/sdcard/dsh_items.txt` | 发放物品 | `<物品id> <数量>` 每行一条 |
| `/sdcard/dsh_item_attrs.txt` | 修改物品属性 | `<物品id> <数量>` |
| `/sdcard/dsh_export.txt` | 导出物品 id 表 | 存在即导出到 `/sdcard/dsh_items_all.txt` |

`dsh_hooks.txt` 可用 token：
`onegift`、`failgift`、`signed`、`liveness`、`onegiftui`、`equipui`、`vip`、`tip`、`scene`、`btn`、`draw`

> **必须授予存储权限**，否则 patch 读不到上述文件（会静默跳过）：
> ```bash
> adb shell pm grant com.DBGame.DiabloLOL android.permission.READ_EXTERNAL_STORAGE
> adb shell pm grant com.DBGame.DiabloLOL android.permission.WRITE_EXTERNAL_STORAGE
> ```

---

## 5. 已完成 / 已验证的功能状态

判据：**零崩溃 + 画面正常 + 目标行为生效**（每次改动后装机、抓 30 s logcat 复测）。

| 能力 | 状态 | 说明 |
|---|---|---|
| 重建工程可编译、可打包、可安装 | ✅ | AGP 8.5.2 + NDK r26 全链路通过 |
| 原版 `.so` 不被修改 | ✅ | 混合方案成立的前提 |
| 内联 Hook 引擎 `capture4` | ✅ | 多目标批量安装、逐目标开关 |
| 6 个入口 Hook 安装 | ✅ | `onegift / failgift / signed / liveness / onegiftui / equipui` |
| 月卡 / 7 日登录开关 | ✅ | 经 `DataManager` 单例调用 4 个 setter |
| 物品 id 表枚举 | ✅ | 实测导出 **301** 个有效 id |
| 物品**属性修改** | ✅ | `getItemDataByID` → `ItemData::setItemNum`，幂等、零崩溃 |
| 物品**发放** | 🚧 | 需在 GL 线程执行（`addItem` 内部会建 cocos2d/UI 对象） |
| `requestVip` Hook | ❌ 禁用 | 与其它 Hook 组合时崩（`strlen` 收到脏指针，有 tombstone 佐证） |
| `BLGameScene::tick` Hook | ❌ 禁用 | 每帧调用，单开即崩 |
| 入口常显（`initXxx` 捕获） | 🚧 | Hook 装得比主菜单构造晚，捕不到实例 |

### 一条关键经验

`libcocos2dcpp.so` 里的函数分三类，**只有前两类能直接被 patch 线程调用**：

| 类型 | 能否直接调 | 例子 |
|---|---|---|
| 纯数据 setter（只写字段） | ✅ | `setISShowVipUI` / `setISBuyVip` / `ItemData::setItemNum` |
| 单例取值（只读） | ✅ | `shareDataManager()` / `shareManager()` / `getItemDataByID` |
| 创建 cocos2d / UI 对象 | ❌ **必须 GL 线程** | `addItem(std::vector<int>)` / `createItemData` |

调用**实例方法**时必须拿到真实实例（`shareManager()` 这类单例是安全入口）；
拿不到 `this` 就盲调会立即 SIGSEGV。

---

## 6. 逆向要点（便于二次开发）

原版 `libcocos2dcpp.so` 导出 43 917 个符号，全部保留（未混淆）。
定位手段：`llvm-nm -D --defined-only` + `llvm-objdump -d`，
Ghidra 的 `tsv` 地址 = 虚拟地址 `+ 0x10000`。

已确认的关键符号（原版 v1.18.1）：

```text
DataCacheManager::shareManager()                0x44c084   单例
DataCacheManager::getItemDataByID(int)          0x44c0c8   物品表查询（返回 ItemData*）
DataManager::shareDataManager()                 0x44c418   单例
DataManager::createItemData(int)                0x44c7d8   ⚠ 盲调返回 0，不要单独用
DataManager::setISShowVipUI(bool)               0x44c322
DataManager::setISGetVipReward(bool)            0x44c316
DataManager::setISShowSevenDay(bool)            0x44c2da
DataManager::setISBuyVip(bool)                  0x44c30a
ItemData::setItemNum(int)                       0x477d08   str r1,[r0,#0x54]
ItemData::getItemNum()                          0x477d04   ldr r0,[r0,#0x54]
addItem(std::vector<int>)                       0x6c309c   ⚠ 必须 GL 线程
CCDirector::sharedDirector()                    0x758484
CCDirector::drawScene()                         0x759394   每帧、GL 线程
BLMainUIMenu::initOneGift()                     0x4bfdd8
BLMainUIMenu::initFailGift()                    0x4c1960
BLMainUIMenu::initSigned()                      0x4c3db0
BLMainUIMenu::initLiveness()                    0x4c0930
BLGameScene::requestVip(CCObject*)              0x417a50   ❌ 不可 Hook
BLOneGiftUI::tick(float)                        0x544ba4
EquipGiftUI::tick(float)                        0x53f99c
```

C++ 符号为 Itanium ABI，例如 `_ZN16DataCacheManager15getItemDataByIDEi`。
⚠️ 注意长度前缀（`getItemDataByID` 是 15 个字符 → `15`，写错就 `dlsym` 不到）。

调试技巧：

```bash
adb logcat -c && adb logcat -s dsh_patch:V      # 只看 patch 自己的日志
# 崩溃现场（高通/OPPO 机型）：
adb shell ls -t /data/persist_log/olc/com.oplus.crashbox/anr_crash/ | head
```

---

## 7. 已知问题与后续方向

* **物品发放**：`addItem()` 会创建 cocos2d 对象，必须回到 GL 线程。
  当前思路是 Hook `CCDirector::drawScene()`（每帧、GL 线程）在渲染循环里执行一次性任务；
  另一种是绕开 UI 直接走数据层
  （`ItemData::create()` + `setItemNum()` + `BackPackData::addItemData(ItemData*, bool)`）。
* **入口常显**：`initXxx` 只在主菜单构造时调用一次，而 Hook 总要晚几十毫秒才装上，
  因此捕获不到实例。方向是改从场景树或单例反查 `BLMainUIMenu*`。
* **`requestVip`**：`strlen` 收到非法指针（tombstone 已确认），
  说明该函数的参数在桩里被破坏，需要更严格的寄存器保护方案。
* **仓库体积**：`assets`（103 MB）与 `jniLibs`（13.5 MB）均已入库，克隆约 120 MB。

---

## 8. 依赖与致谢

* [cocos2d-x 2.2.2](https://github.com/cocos2d/cocos2d-x) — 游戏引擎（重建源码树基于其公开版本）
* Android NDK / CMake / AGP — 构建工具链
* Ghidra、`llvm-objdump`、`llvm-nm` — 反汇编与符号分析
* `apktool`、`apksigner`、`zipalign` — 解包与签名

---

## 9. 许可

本仓库中**本项目原创**的代码（`app/src/main/cpp/patch/`、`ModMenu*.java`、`ItemPicker.java`
及构建脚本）以 MIT 许可发布，详见 `LICENSE`。

其余内容（重建的源码骨架）仅作为逆向工程研究材料提供，
其版权归**原游戏开发商/发行商**所有，不随本许可授权。

---

## SQLite 数据通道（R392~R401）

游戏的数据保存在一个 **内存 SQLite** 里（不落盘成 `.db`），因此过去在 `/data/data` 里找不到任何数据库文件。本模块直接和这个数据库对话。

### 如何拿到 `sqlite3*`

不用 hook（`sqlite3_prepare_v2` / `sqlite3_exec` / `open` 这类热点函数一律会崩），而是扫描进程自己的内存：

1. 读 `/proc/self/maps`，只看可读+可写、且 ≤64MB 的段
2. 每 4 字节比对魔数 `SQLITE_MAGIC_OPEN = 0xa029a697`（本游戏内嵌 SQLite 3.8.4.3）
3. 命中后用 `sqlite3_errmsg()` 验证：真实句柄返回 `"not an error"`，伪指针只会返回 `"out of memory"` 而**不会崩溃**

### 数据库结构

| 库 | 内容 |
|---|---|
| 配置库 | 172 张表：`chest` `drop_group` `attack` `exp` `map` `ai` `attr_group` `monster_group` … |
| 玩家库 | 26 张表：`backpack` `virtualitem` `role` `user` `campaign` `talent_user` `treasure_*` … |

关键字段：

```
backpack   (serial, itemid, num, lv, roleid, equipindex, upgracetime)   ← 真正的背包
virtualitem(serial, itemid, num)                                        ← 虚拟物品（礼包类）
user       (..., copper, gold, ...)                                     ← 铜钱 / 钻石字段
role       (serial, roleid, lv, exp, owen, soul, star, Q, W, E, R, ...) ← 角色
```

### 发物品（已验证生效）

```bash
# 1) 本地写好 SQL（每条一行）
DELETE FROM backpack WHERE itemid IN (110,121,130)
INSERT INTO backpack (itemid,num,lv,roleid,equipindex,upgracetime) VALUES (110,7,1,0,0,0)
INSERT INTO backpack (itemid,num,lv,roleid,equipindex,upgracetime) VALUES (121,3,1,0,0,0)

# 2) 推送到设备并放进应用的私有目录
adb push multi.txt /data/local/tmp/multi.txt
adb shell chmod 644 /data/local/tmp/multi.txt
adb shell "run-as com.DBGame.DiabloLOL cp /data/local/tmp/multi.txt \
    /data/data/com.DBGame.DiabloLOL/files/dsh_sqlexec.txt"

# 3) 放置触发器
adb shell "run-as com.DBGame.DiabloLOL sh -c 'echo on > \
    /data/data/com.DBGame.DiabloLOL/files/dsh_early.txt'"

# 4) 启动游戏一次写入，第二次启动生效
```

验证日志：

```
sqlexec: rc=0 ok | INSERT INTO backpack ... VALUES (110,7,1,0,0,0)
early: game says item 110 count = 7      ← 游戏自己的接口读到了
early: game says item 121 count = 3
early: game says item 130 count = 9
crash = 0
```

### ⚠️ 关键：生效需要跨进程

游戏的启动顺序是「打开库 → 读库建内存模型 → 本次运行内只写不读」。
因此：

- 同一次运行内写入 → 看不到（模型已经建好了）
- **写入后重新启动 → 游戏读库 → 物品进入背包** ✓

### 改角色属性（已验证生效）

```sql
UPDATE role SET lv=50 WHERE roleid=1001
```

界面「战力」从 **383 → 2245**。

### 货币的边界

`user.copper` / `user.gold` 可以写，但界面货币由服务端实时推送覆盖，改库不跟随。
**角色属性 / 背包物品读库可改，货币需走网络层。**

### 配置文件一览

| 文件 | 作用 |
|---|---|
| `dsh_early.txt` | ★ 核心触发器：启动即执行 SQL |
| `dsh_sqlexec.txt` | 每行一条 SQL，对玩家库执行 |
| `dsh_sqlfind.txt` | 扫句柄 + 导出全部建表语句 |
| `dsh_sqldump.txt` | 26 张玩家表全量样本 |
| `dsh_sqlverify.txt` | `virtualitem` 回读 |
| `dsh_item_attrs.txt` | `<id> <num>` → `getItemDataByID` + `setItemNum` |
| `dsh_grant.txt` | ⚠ 会触发旧的内存发放路径（会崩），测试 SQL 时请删除 |

### 踩坑记录

- **不要用 hook**：`drawScene` / `BLGameScene::tick` / `open` / `openat` / `sqlite3_prepare_v2` / `sqlite3_exec` 全部会崩（4 字节 Thumb 补丁破坏了 ABI）
- **不要用 `adb shell run-as ... sh -c '...'` 写带空格的内容**：adb 会按空格拆参数，`sh -c` 只收到第一个词。改用「本地写文件 → push → `run-as cp`」
- **配置目录必须用应用私有目录** `/data/data/<pkg>/files/`：`/sdcard/Android/data/...` 是 `media_rw_data_file` 标签，应用（`untrusted_app`）无权访问
- **补丁库改完要确认真的进了 APK**：gradle 的 `stripDebugDebugSymbols` 会重写 `libpatch.so`，用 `llvm-strings` 核对关键字符串
