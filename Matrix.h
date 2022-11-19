#pragma once
#include <iostream>
#include "Vector.h"

/// <summary>
/// ����� �������.
/// </summary>
class Matrix
{
public:
	/// <summary>
	/// ����������� � ����������� (������ ������� �� ������� ��������)
	/// </summary>
	/// <param name="v">������ ��������</param>
	/// <param name="height">����� ������� ��������</param>
	Matrix(Vector* v, int height);

	/// <summary>
	/// ������� �����������
	/// </summary>
	Matrix();

	/// <summary>
	/// ����������
	/// </summary>
	~Matrix();

	/// <summary>
	/// �������� ��������� ������� � ������ �� �������
	/// </summary>
	/// <param name="n"></param>
	/// <returns></returns>
	Vector& operator[] (int n);

	int GetMatrixHeight() { return _y; }
private:
	/// <summary>
	/// ����� ������� ��������
	/// </summary>
	int _y;

	/// <summary>
	/// ������ ��������
	/// </summary>
	Vector* ArrOfMatrix;
};