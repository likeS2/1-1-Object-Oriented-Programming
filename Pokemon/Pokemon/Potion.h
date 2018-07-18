#pragma once
#include<iostream>
#include"Item.h"
#include"Shop.h"

class Potion
	:public Item, public Shop
{
public:
	Potion();
	~Potion();

private:
	void virtual use();
};

