#pragma once
#include <iostream>
#include "Vector.h"

/// <summary>
/// Класс матрицы.
/// </summary>
class Matrix
{
public:
	/// <summary>
	/// Конструктор с параметрами (создаёт матрицу из массива векторов)
	/// </summary>
	/// <param name="v">Массив векторов</param>
	/// <param name="height">Длина массива векторов</param>
	Matrix(Vector* v, int height);

	/// <summary>
	/// Базовый конструктор
	/// </summary>
	Matrix();

	/// <summary>
	/// Деструктор
	/// </summary>
	~Matrix();

	/// <summary>
	/// Оператор получения доступа к данным по индексу
	/// </summary>
	/// <param name="n"></param>
	/// <returns></returns>
	Vector& operator[] (int n);

	int GetMatrixHeight() { return _y; }
private:
	/// <summary>
	/// Длина массива векторов
	/// </summary>
	int _y;

	/// <summary>
	/// Массив векторов
	/// </summary>
	Vector* ArrOfMatrix;
};