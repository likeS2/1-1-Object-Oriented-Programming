#pragma once
#include "Pokemon.h"

using namespace std;

class Yuhyun
	:public Pokemon
{
public:
	Yuhyun();
	~Yuhyun();

	Yuhyun(int _level, int _hp, int _exp, string _skill, string _pokemon_name);


private:
	int level;
	int hp;
	int exp;
	string pokemon_name;
};

