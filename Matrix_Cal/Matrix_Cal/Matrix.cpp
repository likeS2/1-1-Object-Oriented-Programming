#include "Matrix.h"



Matrix::Matrix()
{
}

Matrix::Matrix(int _row, int _col)
{
	row = _row;
	col = _col;

}


Matrix::~Matrix()
{
}

void Matrix::print()
{
	
	int** mat;
	mat = new int*[row];
	for (int i = 1; i <= row; i++)
		mat[i] = new int[col];

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			mat[i][j] = 
		}
	}
}

Matrix Matrix::operator+(Matrix other)
{

	return Matrix();
}

Matrix Matrix::operator-(Matrix other)
{
	return Matrix();
}

Matrix Matrix::operator*(Matrix other)
{
	return Matrix();
}
