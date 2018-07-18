#pragma once
#include "Application.h"
#include "Pokemon.h"
#include <string>

using namespace std;

class Player
{
public:
	Player();
	~Player();

	Player(string _name);
	
	/*char pokemon_arr[6];
	void catch_pokemon(char c_pokemon_name);
	void show_arr();
	void insert(int idx, char ch);*/

private:
	string name;
	//string main_pokemon;
	int money = 10000;

};

