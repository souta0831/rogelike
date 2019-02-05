// #include "Extension\DirectX11\DXGraphics11.hpp"
#include "StdAfx.h"
#include "GameMain.h"

bool GameMain::Initialize()
{
	// TODO: Add your initialization logic here
	WindowTitle(_T("ES Game Library"));
	player.Initialize();//プレイヤー初期化
	camera_mane.Initialize();
	GenerateMap();//マップ初期化関数
	//マップから読み取った情報から地形を生成
	
	
	return true;
}
void GameMain::GenerateMap() {
	//map.GenerateMap();//マップ生成
	int g = 0;
	//地形のを大きさを初期化
	ground_array.clear();
	//マップ生成（あとからクラス化する）
	int map_coppy[10][10]{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,9,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 },
	};

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			switch (map_coppy[y][x]) {
				ground Ground;
			case 1:
				ground_array.push_back(Ground);
				ground_array[g].model_Init(Vector3(x * 64, 0, y * 64),(_T("sand.x")));
				g++;
			case 0:
				ground_array.push_back(Ground);
				ground_array[g].model_Init(Vector3(x * 64, 0, y * 64),(_T("wall.x")));
				g++;

			case 9://プレイヤーを配置
				player.SetPos(Vector3(x * 16, 0, y * 16));
			}
		}
	}
}
void GameMain::Finalize()
{
	// TODO: Add your finalization logic here

}

/// <summary>
/// Allows the game to run logic such as updating the world,
/// checking for collisions, gathering input, and playing audio.
/// </summary>
/// <returns>
/// Scene continued value.
/// </returns>
int GameMain::Update()
{
	player.Update();
	//camera_mane.Update();//カメラ
	//camera_mane.Pos_SetCameral(player.re_pos());//座標を取得→カメラに反映

	return 0;
}

/// <summary>
/// This is called when the game should draw itself.
/// </summary>
void GameMain::Draw()
{
	// TODO: Add your drawing code here
	GraphicsDevice.Clear(Color_CornflowerBlue);

	GraphicsDevice.BeginScene();
	for (int i = 0; i < ground_array.size(); i++) {
		ground_array[i].Draw();
	}

	SpriteBatch.Begin();


	SpriteBatch.End();

	GraphicsDevice.EndScene();
}
