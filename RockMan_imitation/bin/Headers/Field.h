#pragma once
#include "MyScene.h"
/* Common options of Stages on this page*/
class CField :
	public CMyScene
{
protected:
	D3DXMATRIX matWorld;
public:
	virtual HRESULT Initialize()PURE;
	virtual HRESULT Progress()PURE;
	virtual HRESULT Render()PURE;
	virtual HRESULT Release()PURE;
public:
	CField();
	virtual ~CField();
};

