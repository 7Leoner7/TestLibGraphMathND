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
    Vector operator+(Vector v1) {
        return sum(*this, v1);
    };

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
    Vector operator+=(Vector v1) {
        return sum(*this, v1);
    };

    Vector& operator=(const Vector& v1);
    /// <summary>
    /// Координата N
    /// </summary>
    /// <param name="n"></param>
    /// <returns>Значение координаты</returns>
    double getN(int n) { return this->Params[n]; }

    int getleng() { return leng; }

private:
    Vector sum(Vector v1, Vector v2)
    {
        int leng0 = (v2.leng > v1.leng) ? v1.leng : v2.leng;
        int leng1 = (v2.leng < v1.leng) ? v1.leng : v2.leng;
        double* res = new double[leng1];

        for (int i = 0; i < leng0; i++)
            res[i] = v2.Params[i] + v1.Params[i];
        if (v2.leng < v1.leng) {
            for (int i = leng0; i < leng1; i++)
                res[i] = v1.Params[i];
        }
        else
        {
            for (int i = leng0; i < leng1; i++)
                res[i] = v2.Params[i];
        }

        return Vector(leng1, res);
    }
    double* Params;
    int leng;
};