#include "Square.h"
#include<iostream>

using namespace std;


Square::Square()
{
	side_length = 0;
}


Square::~Square()
{
}

Square::Square(int _side_length)
{
	side_length = _side_length;
}

double Square::round()
{
	double square_round;
	square_round = side_length * 4;

	return square_round;
}

double Square::area()
{
	double square_area;
	square_area = side_length * side_length;

	return square_area;
}