#pragma once
#include "Vector.h"
#include "Matrix.h"

/// <summary>
/// ����� ��� ����������� ��������
/// </summary>
class GraphMathHelper
{
public:
    /// <summary>
    /// ����������� � ���������� (������������� ���������������� ������� ��������������)
    /// </summary>
    /// <param name="MatrixN">���������������� ������� ��������������</param>
    GraphMathHelper(Matrix& MatrixN);

    /// <summary>
    /// ����������
    /// </summary>
    ~GraphMathHelper();

    /// <summary>
    /// �������������� ��������� �����
    /// </summary>
    /// <param name="x">���������� ����� �� ��� X</param>
    /// <param name="y">���������� ����� �� ��� Y</param>
    /// <returns>���������� ��������� ���������� �����, ��������������� ����� �������</returns>
    Vector DotCoordsChange(double x, double y);

    /// <summary>
    /// �������������� ��������� �����
    /// </summary>
    /// <param name="x">���������� ����� �� ��� X</param>
    /// <param name="y">���������� ����� �� ��� Y</param>
    /// <param name="z">���������� ����� �� ��� Z</param>
    /// <returns>���������� ��������� ���������� �����, ��������������� ����� �������</returns>
    Vector DotCoordsChange(double x, double y, double z);

    /// <summary>
    /// �������������� ��������� �����(�� ���������� �� N-������ ����������!!!)
    /// </summary>
    /// <param name="v">���������� �����</param>
    /// <returns>���������� N-������ ���������� �����</returns>
    Vector DotCoordsChange(Vector v);

    /// <summary>
    /// ������� ��������������
    /// </summary>
    /// <returns>���������� ������� ��������������</returns>
    Matrix GetMatrix() { return matrix; }

    /// <summary>
    /// ������������� ������� ��������������
    /// </summary>
    /// <param name="MatrixN">������� ��������������</param>
    void SetMatrix(Matrix& MatrixN);
private:
    /// <summary>
    /// ������� ��������������
    /// </summary>
    Matrix& matrix;
};