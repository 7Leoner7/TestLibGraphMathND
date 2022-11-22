#pragma once
#include <iostream>

/// <summary>
/// ����� �������
/// </summary>
class Vector {
public:
    /// <summary>
    /// ������ ���������� ������
    /// </summary>
    /// <param name="x">���������� �� ��� X</param>
    /// <param name="y">���������� �� ��� Y</param>
    Vector(double x, double y);

    /// <summary>
    /// ������ ��������� ������
    /// </summary>
    /// <param name="x">���������� �� ��� X</param>
    /// <param name="y">���������� �� ��� Y</param>
    /// <param name="z">���������� �� ��� Z</param>
    Vector(double x, double y, double z);

    /// <summary>
    /// N-������ ������
    /// </summary>
    /// <param name="count"></param>
    /// <param name="_params"></param>
    Vector(int count, double* _params);

    /// <summary>
    /// ����������
    /// </summary>
    ~Vector();

    /// <summary>
    /// �������� ��������
    /// </summary>
    /// <param name="v1">������</param>
    /// <returns>������</returns>
    Vector operator+(Vector v1);

    /// <summary>
    /// ��������� ��������
    /// </summary>
    /// <param name="v1">������</param>
    /// <returns>������</returns>
    Vector operator*(Vector v1);

    /// <summary>
    /// ��������� ������� �� �����
    /// </summary>
    /// <param name="k">�����</param>
    /// <returns>������</returns>
    Vector operator*(double k);

    /// <summary>
    /// �������� ��������
    /// </summary>
    /// <param name="v1">������</param>
    /// <returns>������</returns>
    Vector operator+=(Vector v1);

    /// <summary>
    /// ������������
    /// </summary>
    /// <param name="v1"></param>
    /// <returns></returns>
    Vector& operator=(const Vector& v1);

    /// <summary>
    /// ���������� N
    /// </summary>
    /// <param name="n"></param>
    /// <returns>�������� ����������</returns>
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