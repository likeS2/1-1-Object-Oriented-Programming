
#include "Rectangle.h"
#include <iostream>

using namespace std;


Rectang::Rectang()
{
	width = 0;
	height = 0;
}

Rectang::~Rectang()
{
}

Rectang::Rectang(int _width, int _height)
{
	width = _width;
	height = _height;
}

double Rectang::round()
{
	double rect_round;
	rect_round = (width * 2) + (height * 2);

	return rect_round;
}

double Rectang::area()
{
	double rect_area;
	rect_area = width * height;

	return rect_area;
}
