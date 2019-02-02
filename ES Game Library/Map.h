#pragma once
class Map {
public:
	void GenerateMap();
	int*re_map() { return map_deta; };
private:
	int map_deta[10][10];
};