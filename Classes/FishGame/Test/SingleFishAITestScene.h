﻿//单例 AI对象测试
#ifndef __SINGLEFISHAITESTSCENE_H__
#define __SINGLEFISHAITESTSCENE_H__

#include "Base/TestBaseScene.h"
#include "FishGame/FishObj.h"
#include "FishGame/Test/DrawLayer.h"


class SingleFishAITestScene:public TestBaseScene,public DrawDelegate
{
public:
	SingleFishAITestScene();
	virtual ~SingleFishAITestScene();
	CREATE_FUNC(SingleFishAITestScene);
	bool init();

	void onEnter();
	void onExit();

	virtual void debugDraw();

private:
	CCLayer* m_bgLayer;
	CCLayer* m_fishLayer;
	FishObj* m_fishObj;
	bool m_smallWallFlag;
	CCRect m_drawRect;

private:
	void onWallTest(CCObject* pSender,TouchEventType eventtype);

	void setDrawRect(CCRect r);

};

#endif