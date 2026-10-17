#pragma once
// CCJson
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CCJson {
public:
    undefined8 parseValue(cocos2d::extension::Json*);
    void parseObject(cocos2d::extension::Json*);
    undefined4 parseArray(cocos2d::extension::Json*);
    undefined8 dictionaryWithJson(cocos2d::extension::Json*);
    void JSONObjectWithString(char const*);
    void JSONObjectWithString(std::string);
    void JSONObjectWithFileName(std::string);
    void parseDictionary(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&, cocos2d::CCDictionary*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>&);
    void parseArray(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&, cocos2d::CCArray*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>&);
    void parseValue(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&, cocos2d::CCDictionary*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>&);
    void JSONStringWithDictionary(cocos2d::CCDictionary*);
};
