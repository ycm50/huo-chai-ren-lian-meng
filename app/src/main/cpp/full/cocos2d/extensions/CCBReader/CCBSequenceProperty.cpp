#include "CCBSequenceProperty.h"

using namespace cocos2d;
using namespace std;

NS_CC_EXT_BEGIN

CCBSequenceProperty::CCBSequenceProperty()
: mName("")
, mType(0)
{
    init();
}

bool CCBSequenceProperty::init()
{
    mKeyframes = new CCArray();

    /* CTOR_FIX (R151): 裸 new CCArray() 不跑 init() ⇒ 内部 data==NULL ⇒ count() 解引用 NULL (fault 0x0) */

    if (mKeyframes != 0) { mKeyframes->init(); }
    
    return true;
}

CCBSequenceProperty::~CCBSequenceProperty()
{
    CC_SAFE_RELEASE_NULL(mKeyframes);
}

const char* CCBSequenceProperty::getName()
{
    return mName.c_str();
}

void CCBSequenceProperty::setName(const char *pName)
{
    mName = pName;
}

int CCBSequenceProperty::getType()
{
    return mType;
}

void CCBSequenceProperty::setType(int nType)
{
    mType = nType;
}

CCArray* CCBSequenceProperty::getKeyframes()
{
    return mKeyframes;
}

NS_CC_EXT_END
