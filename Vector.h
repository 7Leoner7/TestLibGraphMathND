#pragma once
#include <iostream>

/// <summary>
/// Класс вектора
/// </summary>
class Vector {
public:
    /// <summary>
    /// Создаёт двухмерный вектор
    /// </summary>
    /// <param name="x">Координаты по оси X</param>
    /// <param name="y">Координаты по оси Y</param>
    Vector(double x, double y);

    /// <summary>
    /// Создаёт трёхмерный вектор
    /// </summary>
    /// <param name="x">Координаты по оси X</param>
    /// <param name="y">Координаты по оси Y</param>
    /// <param name="z">Координаты по оси Z</param>
    Vector(double x, double y, double z);

    /// <summary>
    /// N-мерный вектор
    /// </summary>
    /// <param name="count"></param>
    /// <param name="_params"></param>
    Vector(int count, double* _params);

    /// <summary>
    /// Деструктор
    /// </summary>
    ~Vector();

    /// <summary>
    /// Сложение векторов
    /// </summary>
    /// <param name="v1">Вектор</param>
    /// <returns>Вектор</returns>
    Vector operator+(Vector v1);

    /// <summary>
    /// Умножение векторов
    /// </summary>
    /// <param name="v1">Вектор</param>
    /// <returns>Вектор</returns>
    Vector operator*(Vector v1);

    /// <summary>
    /// Умножение вектора на число
    /// </summary>
    /// <param name="k">Число</param>
    /// <returns>Вектор</returns>
    Vector operator*(double k);

    /// <summary>
    /// Сложение векторов
    /// </summary>
    /// <param name="v1">Вектор</param>
    /// <returns>Вектор</returns>
    Vector operator+=(Vector v1);

    /// <summary>
    /// Присваивание
    /// </summary>
    /// <param name="v1"></param>
    /// <returns></returns>
    Vector& operator=(const Vector& v1);

    /// <summary>
    /// Координата N
    /// </summary>
    /// <param name="n"></param>
    /// <returns>Значение координаты</returns>
    double getN(int n) { return this->Params[n]; }

    int getlengN() { return leng; }

    double GetLength() {
        double n = 0;
        for (int i = 0; i < leng; i++)
            n += Params[i] * Params[i];
        return sqrt(n);
    }

private:
    Vector sum(Vector v1, Vector v2);
    double* Params;
    int leng;
};