#pragma once
#include<iostream>
#include "Figure.h"


class Circle
	:public Figure
{
public:
	Circle();
	~Circle();

	Circle(double _radius);

	double virtual round();
	double virtual area();

private:
	double radius;
};

