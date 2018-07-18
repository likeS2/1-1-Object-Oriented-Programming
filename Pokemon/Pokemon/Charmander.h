#pragma once
#include"Pokemon.h"

using namespace std;

class Charmander
	:public Pokemon
{
public:
	Charmander();
	~Charmander();


	Charmander(int _level, int _hp, int _exp, const char _pokemon_name);

	void virtual attack();

private:
	int level;
	int hp;
	int exp;
	char pokemon_name;

};

