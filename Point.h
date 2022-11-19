#pragma once
class Point
{
public:
    Point(int n, double* params);
    ~Point();
    int n;
    double* params;
    bool operator==(Point p);
};