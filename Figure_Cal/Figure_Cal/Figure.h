#pragma once
#include<iostream>

class Figure
{
public:
	Figure();
	~Figure();

	double virtual round() = 0;
	double virtual area() = 0;

};

