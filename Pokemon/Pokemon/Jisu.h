#pragma once
#include"Pokemon.h"

using namespace std;

class Jisu
	:public Pokemon
{
public:
	Jisu();
	~Jisu();

	Jisu(int _level, int _hp, int _exp, string _skill, string _pokemon_name);


private:
	int level;
	int hp;
	int exp;
	string pokemon_name;
};

