#pragma once
#include "DynamicObjects.h"
class CMonster :
	public CDynamicObjects
{
public:
	bool Activated = true;
	float boomFrame = 0;
	bool isHit = false;
	float m_Frame = 0;
	bool bLeft = false;
	bool bRight = false;
public:
	HRESULT Initialize();
	HRESULT Progress();
	HRESULT Render();
public:
	CMonster();
	virtual ~CMonster();
};
