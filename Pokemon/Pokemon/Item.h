#pragma once
#include<iostream>
#include<string>

class Item
	:public Shop
{
public:
	Item();
	~Item();

private:
	string item_name;
	int count;
	int price;
};

