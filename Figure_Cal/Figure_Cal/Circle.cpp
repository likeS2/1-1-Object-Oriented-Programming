#include "Circle.h"
#include<iostream>

using namespace std;



Circle::Circle()
{
	radius = 0;
}


Circle::~Circle()
{
}


Circle::Circle(double _radius)
{
	radius = _radius;
}

double Circle::round()
{
	double circle_round;
	const double pi = 3.14159265358979323846;

	circle_round = 2 * radius * pi;

	return circle_round;
}

double Circle::area()
{
	double circle_area;
	const double pi = 3.14159265358979323846;

	circle_area = pi * radius * radius;

	return circle_area;
}
