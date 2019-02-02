#pragma once
#include"ESGLib.h"
class Player {
public:
	void Initialize();
	void SetPos(Vector3 pos);
	void Update();
	//キーボード入力関数
	void Up_input();
	void Down_input();
	void Left_input();
	void Right_input();
	Vector3 re_pos() { return pos; };
private:
	MODEL player;
	Vector3 pos;

};