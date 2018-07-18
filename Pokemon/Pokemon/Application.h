#pragma once
#include<Windows.h>
#include"Pokemon.h"
#include"Player.h"
#include"Yuhyun.h"
#include"Wooper.h"
#include"Eunseo.h"
#include"Charmander.h"
#include"Jisu.h"
#include"Chikorita.h"


#include"Item.h"
#include"Shop.h"
#include"Ball.h"
#include"Potion.h"

using namespace std;

class Application
{
public:
	Application();
	~Application();

	void run();
	void start_menu();
	void main_menu();


private:
	int input;
	string name;


};

