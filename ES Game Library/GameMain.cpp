// #include "Extension\DirectX11\DXGraphics11.hpp"
#include "StdAfx.h"
#include "GameMain.h"

bool GameMain::Initialize()
{
	int g = 0;
	// TODO: Add your initialization logic here
	WindowTitle(_T("ES Game Library"));
	map.GenerateMap();//マップ生成
	player.Initialize();//プレイヤー初期化
	camera_mane.Initiarize();//初期化
	//マップから読み取った情報から地形を生成
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			switch (map.re_map[y][x]()) {
				ground Ground;
			case 1:
				ground_array.push_back(Ground);
				ground_array[g].model_Init(Vector3(x * 32, 0, y*32),(_T("wall.x")));
				g++;
			case 0:
				ground_array.push_back(Ground);
				ground_array[g].model_Init(Vector3(x * 32, 0, y * 32), (_T("wall.x")));
				g++;

			case 9://プレイヤーを配置
				player.SetPos(Vector3(x * 32, 0, y * 32));
			}
		}
	}
	
	return true;
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

	camera_mane.SetCameral(player.re_pos());

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
