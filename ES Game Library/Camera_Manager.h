#pragma once
#include"ESGLib.h"
class Camera_Manager {
public:
	void Initialize();
	void Update();
	void SetCamera(Vector3 pos);
private:
	CAMERA main_camera;
};