#pragma once
#include "ESGLib.h"
//マップ描画用クラス
class ground {
public:
	void model_Init(Vector3 pos, LPCTSTR MODEL);
	void Draw();
private:
	MODEL model;
};