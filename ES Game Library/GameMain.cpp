// #include "Extension\DirectX11\DXGraphics11.hpp"
#include "StdAfx.h"
#include "GameMain.h"

bool GameMain::Initialize()
{
	int g = 0;
	// TODO: Add your initialization logic here
	WindowTitle(_T("ES Game Library"));
	map.initialize();
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			switch (map.re_map[y][x]) {
				ground Ground;
			case 1:
				ground_array.push_back(Ground);
				ground_array[g].model_Init(Vector3(x * 32, 0, y*32),(_T("wall.x")));
				g++;
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
	// TODO: Add your update logic here


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
