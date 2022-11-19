#include "Point.h"

Point::Point(int n, double* params)
{
    this->n = n;
    this->params = params;
}

Point::~Point()
{
}

bool Point::operator==(Point p) {
    int leng = p.n > this->n ? this->n : p.n;
    bool res = true;
    for (int i = 0; i < leng; i++)
        if (this->params[i] != p.params[i]) {
            res = false;
            break;
        }
    return res;
}