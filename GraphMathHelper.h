#pragma once
#include "Vector.h"
#include "Matrix.h"

/// <summary>
/// Класс для графических расчётов
/// </summary>
class GraphMathHelper
{
public:
    /// <summary>
    /// Конструктор с параметром (устанавливает пользовательскую матрицу преобразований)
    /// </summary>
    /// <param name="MatrixN">Пользовательмкая матрица преобразований</param>
    GraphMathHelper(Matrix& MatrixN);

    /// <summary>
    /// Деструктор
    /// </summary>
    ~GraphMathHelper();

    /// <summary>
    /// Преобразование координат точки
    /// </summary>
    /// <param name="x">Координаты точки по оси X</param>
    /// <param name="y">Координаты точки по оси Y</param>
    /// <returns>Возвращает двумерные координаты точки, преобразованные через матрицу</returns>
    Vector DotCoordsChange(double x, double y);

    /// <summary>
    /// Преобразование координат точки
    /// </summary>
    /// <param name="x">Координаты точки по оси X</param>
    /// <param name="y">Координаты точки по оси Y</param>
    /// <param name="z">Координаты точки по оси Z</param>
    /// <returns>Возвращает трёхмерные координаты точки, преобразованные через матрицу</returns>
    Vector DotCoordsChange(double x, double y, double z);

    /// <summary>
    /// Преобразование координат точки(Не проверяйте на N-мерные координаты!!!)
    /// </summary>
    /// <param name="v">Координаты точки</param>
    /// <returns>Возвращает N-мерные координаты точки</returns>
    Vector DotCoordsChange(Vector v);

    /// <summary>
    /// Матрица преобразований
    /// </summary>
    /// <returns>Возвращает матрицу преобразований</returns>
    Matrix GetMatrix() { return matrix; }

    /// <summary>
    /// Устанавливает матрицу преобразований
    /// </summary>
    /// <param name="MatrixN">Матрицу преобразований</param>
    void SetMatrix(Matrix& MatrixN);
private:
    /// <summary>
    /// Матрица преобразований
    /// </summary>
    Matrix& matrix;
};