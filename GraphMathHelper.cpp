#include "GraphMathHelper.h"

Vector GraphMathHelper::DotCoordsChange(double x, double y)
{
    Vector vx = this->matrix[0] * x;
    Vector vy = this->matrix[1] * y;
    Vector vres = vy + vx;
    return vres;
}

Vector GraphMathHelper::DotCoordsChange(double x, double y, double z)
{
    Vector vx = this->matrix[0] * x;
    Vector vy = this->matrix[1] * y;
    Vector vz = this->matrix[2] * z;
    Vector vres = vy + vx + vz;
    return vres;
}

Vector GraphMathHelper::DotCoordsChange(Vector v)
{
    int l = v.getleng();
    int h = this->matrix.GetMatrixHeight();
    double* vd = new double[l];
    for (int i = 0; i < l; i++)
        vd[i] = 0;

    Vector res(l, vd);
    
    for (int i = 0; i < h; i++)
    {
        Vector v0 = this->matrix[i] * v.getN(i);
        res += v0;
    }
    return res;
}

void GraphMathHelper::SetMatrix(Matrix& MatrixN) {
    matrix = MatrixN;
}

GraphMathHelper::GraphMathHelper(Matrix& MatrixN) : matrix(MatrixN)
{
    SetMatrix(MatrixN);
}

GraphMathHelper::~GraphMathHelper()
{
}

