#pragma once
#include<iostream>

using namespace std;

class Matrix
{
public:
	Matrix();
	Matrix(int _row, int _col);

	~Matrix();

	void print();

	Matrix operator+(Matrix other);
	Matrix operator-(Matrix other);
	Matrix operator*(Matrix other);

private:
	int row;
	int col;
	int** mat;
};

