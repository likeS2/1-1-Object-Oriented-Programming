#pragma once
#include<iostream>
#include"Figure.h"

class Triangle
	:public Figure
{
public:
	Triangle();
	~Triangle();

	Triangle(int _a_length, int _b_length, int _c_length);

	double virtual round();
	double virtual area();

private:
	double a_length;
	double b_length;
	double c_length;
};

