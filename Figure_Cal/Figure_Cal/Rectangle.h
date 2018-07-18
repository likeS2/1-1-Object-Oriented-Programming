#pragma once
#include<iostream>
#include "Figure.h"


class Rectang
	: public Figure
{
public:
	Rectang();
	~Rectang();

	Rectang(int _width, int _height);
	double virtual round();
	double virtual area();

private:
	int width;
	int height;
};

