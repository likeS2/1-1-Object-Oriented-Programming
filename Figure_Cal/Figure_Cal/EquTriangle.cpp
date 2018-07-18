#include "EquTriangle.h"
#include <math.h>

using namespace std;

EquTriangle::EquTriangle()
{
	side_length = 0;
}


EquTriangle::~EquTriangle()
{
}

EquTriangle::EquTriangle(int _side_length)
{
	side_length = _side_length;
}

double EquTriangle::round()
{
	double equ_tri_round;
	equ_tri_round = side_length * 3;

	return equ_tri_round;
}

double EquTriangle::area()
{
	double equ_tri_area;
	equ_tri_area = (sqrt(3) / 4) * side_length * side_length;

	return equ_tri_area;
}
