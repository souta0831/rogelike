#include"ground.h"
void ground::model_Init(Vector3 pos,LPCTSTR MODEL) {
	model = GraphicsDevice.CreateModelFromFile(MODEL);
	model->SetPosition(pos);
	model->SetScale(5.0f);
	Material mtrl;
	mtrl.Emissive = Color(1.0f, 1.0f, 1.0f);
	model->SetMaterial(mtrl);
}

void ground::Draw() {
	model->Draw();
}