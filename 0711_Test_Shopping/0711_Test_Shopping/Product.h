#pragma once
#include "App.h"
#include "User.h"
#include <iostream>
#include <string>

class Product
	:public App
{
public:
	Product();
	~Product();

	Product(string _p_type, string _p_name, int p_price);

private:
	string p_type;
	string p_name;
	int p_price;
};

