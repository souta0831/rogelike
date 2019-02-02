#pragma once
#include"ESGLib.h"
class Camera_Manager {
public:
	void Initiarize();
	void Update();
	void SetCameral(Vector3 pos);

private:
	CAMERA camera;
};