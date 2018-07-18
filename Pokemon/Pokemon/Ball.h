#pragma once
#include<iostream>
#include"Item.h"
#include"Shop.h"

class Ball
	:public Item, public Shop
{
public:
	Ball();
	~Ball();

private:
	void virtual use();
};

