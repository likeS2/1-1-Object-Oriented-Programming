#pragma once
#include"Player.h"
#include<string>

using namespace std;

class Pokemon
{
public:
	Pokemon();
	~Pokemon();

	void virtual attack() = 0;

};

