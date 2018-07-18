#pragma once
#include "Pokemon.h"
#include <string>

using namespace std;

class Eunseo
	:public Pokemon
{
public:
	Eunseo();
	~Eunseo();
	
	Eunseo(int _level, string _pokemon_name);


private:
	int level;
	string pokemon_name;
};

