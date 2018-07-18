#include "Fraction.h"



Fraction::Fraction()
{
}

Fraction::Fraction(int _den, int _num)
{
	den = _den;
	num = _num;
}


Fraction::~Fraction()
{
}


Fraction Fraction::reduction()
{
	int a=1, b=1, c, d;

	if (a >= b) //분모>분자
	{
		for (int i = b; i > 1; i--)
		{
			c = a % i;
			d = b % i;

			if (c == 0 && d == 0)
			{
				den = a / i;
				num = b / i;
			}
		}
	}
	Fraction result(den, num);
	return result;
	
}

void Fraction::print()
{
	Fraction reduction();
	cout << reduction().num << "/" << reduction().den << endl;
}


Fraction Fraction::add(Fraction other)
{
	int temp_num;
	int temp_den;
	temp_num = (num * other.den) + (den * other.num);
	temp_den = den * other.den;

	Fraction result(temp_den, temp_num);

	return result;
}

Fraction Fraction::sub(Fraction other)
{
	int temp_num;
	int temp_den;
	temp_num = (num * other.den) - (den * other.num);
	temp_den = den * other.den;

	Fraction result(temp_den, temp_num);

	return result;
}

Fraction Fraction::mul(Fraction other)
{
	int temp_num;
	int temp_den;
	temp_num = num * other.num;
	temp_den = den * other.den;
	
	Fraction result(temp_den, temp_num);

	return result;
}

Fraction Fraction::div(Fraction other)
{
	int temp_num;
	int temp_den;
	temp_num = num * other.den;
	temp_den = den * other.num;

	Fraction result(temp_den, temp_num);

	return result;
}


