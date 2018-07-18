#include "Product.h"
#include<iostream>


using namespace std;



Product::Product()
{
}


Product::~Product()
{
}

Product::Product(string _p_type, string _p_name, int _p_price)
{
	p_type = _p_type;
	p_name = _p_name;
	p_price = _p_price;
}
