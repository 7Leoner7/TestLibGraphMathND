#include "Matrix.h"

Matrix::Matrix(Vector* v, int height)
{
	_y = height;
	ArrOfMatrix = v;
	/*	ArrOfMatrix = (Vector*)malloc(height * sizeof(v));
	for (int i = 0; i < height; i++)
		ArrOfMatrix[i] = v[i];*/
}

Matrix::Matrix()
{
	_y = 3;
	ArrOfMatrix = (Vector*)malloc(_y * sizeof(Vector(1, 0, 0)));
	ArrOfMatrix[0] = *(new Vector(1, 0, 0));
	ArrOfMatrix[1] = *(new Vector(0, 1, 0));
	ArrOfMatrix[2] = *(new Vector(0, 0, 1));
}

Matrix::~Matrix()
{
}

Vector& Matrix::operator[] (int n)
{
	return ArrOfMatrix[n];
};