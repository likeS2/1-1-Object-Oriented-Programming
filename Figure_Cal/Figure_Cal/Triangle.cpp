#include "Triangle.h"
#include <math.h>
#include <iostream>

using namespace std;

Triangle::Triangle()
{
	a_length = 0;
	b_length = 0;
	c_length = 0;
}


Triangle::~Triangle()
{
}

Triangle::Triangle(int _a_length, int _b_length, int _c_length)
{
	a_length = _a_length;
	b_length = _b_length;
	c_length = _c_length;
}

double Triangle::round()
{
	double tri_round;

	tri_round = a_length + b_length + c_length;

	return tri_round;
}

double Triangle::area()
{
	double tri_area, s;

	s = (a_length + b_length + c_length) / 2;
	tri_area = sqrt(s * (s - a_length) * (s - b_length) * (s - c_length));
	
	return tri_area;

}
