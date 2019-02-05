#include"Camera_Manager.h"
void Camera_Manager::Initialize() {
	Viewport   view = GraphicsDevice.GetViewport();
	main_camera->SetPerspectiveFieldOfView(45.0f, (float)view.Width, (float)view.Height, 1.0f, 10000.0f);
	main_camera->SetView(Vector3(0.0f, 0.0f+20, 0.0f), Vector3(0,0,0));
	GraphicsDevice.SetCamera(main_camera);
	Light light;
	light.Type = Light_Directional;
	light.Diffuse = Color(1.0f, 1.0f, 1.0f);
	light.Ambient = Color(1.0f, 1.0f, 1.0f);
	light.Specular = Color(1.0f, 1.0f, 1.0f);
	light.Direction = Vector3_Down;
	GraphicsDevice.SetLight(light);

}
void Camera_Manager::Update() {

}
void Camera_Manager::SetCamera(Vector3 pos){

}