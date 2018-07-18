#pragma once
#include<iostream>
#include"Figure.h"

class Square
	:public Figure
{
public:
	Square();
	~Square();

	Square(int _side_length);

	double virtual round();
	double virtual area();

private:
	int side_length;

};

