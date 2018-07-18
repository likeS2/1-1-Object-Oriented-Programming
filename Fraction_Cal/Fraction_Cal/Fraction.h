#pragma once
#include <iostream>

using namespace std;

class Fraction
{
public:
	Fraction();
	Fraction(int _den, int _num);

	~Fraction();

	void print();
	Fraction reduction();

	Fraction add(Fraction other);
	Fraction sub(Fraction other);
	Fraction mul(Fraction other);
	Fraction div(Fraction other);
	

private:
	int den;
	int num;
};



