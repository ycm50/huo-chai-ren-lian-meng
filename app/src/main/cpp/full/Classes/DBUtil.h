#pragma once
// DBUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DBUtil : public cocos2d::CCObject {
public:
    ~DBUtil();
    DBUtil();
    bool init();
    void openDBWithkey(sqlite3**, std::string *, std::string *);
    void select(sqlite3*, std::string *, std::string *, std::string);
    void deleteData(sqlite3*, std::string *, std::string *, std::string);
    void update(sqlite3*, std::string *, std::string *, std::string, std::string, std::string);
    void insertData(sqlite3*, std::string *, std::vector<std::string, std::allocator<std::string>> *, std::vector<std::string, std::allocator<std::string>>);
    void openDB(sqlite3**, std::string *);
    undefined4 * getALLTableName(sqlite3*);
};
