#include"Player.h"
void Player::Initialize() {
	//モデル読み込み
	player = GraphicsDevice.CreateModelFromFile(_T(""));
	
}
void Player::SetPos(Vector3 pos_){
	pos = pos_;
}
void Player::Update() {
	player->SetPosition(pos);
}