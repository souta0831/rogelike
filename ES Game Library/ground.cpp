#include"ground.h"
void ground::model_Init(Vector3 pos,LPCTSTR MODEL) {
	model = GraphicsDevice.CreateModelFromFile(MODEL);
	model->SetPosition(pos);
}

void ground::Draw() {
	model->Draw();
}