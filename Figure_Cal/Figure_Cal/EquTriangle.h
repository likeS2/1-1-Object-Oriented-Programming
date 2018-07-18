#pragma once
#include<iostream>
#include "Figure.h"

class EquTriangle
	:public Figure
{
public:
	EquTriangle();
	~EquTriangle();

	EquTriangle(int _side_length);

	double virtual round();
	double virtual area();

private:
	int side_length;
};

