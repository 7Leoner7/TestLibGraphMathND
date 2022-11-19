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
    Vector operator+(Vector v1) {
        return sum(*this, v1);
    };

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
    Vector operator+=(Vector v1) {
        return sum(*this, v1);
    };

    Vector& operator=(const Vector& v1);
    /// <summary>
    /// ���������� N
    /// </summary>
    /// <param name="n"></param>
    /// <returns>�������� ����������</returns>
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