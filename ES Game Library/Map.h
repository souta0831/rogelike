#pragma once
struct Map
{
void GenerateMap();
//Map re_map() { return *this; };
private:
	int *map_deta[10][10];
};