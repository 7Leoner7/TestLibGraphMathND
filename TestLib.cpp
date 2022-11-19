// TestLib.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "GraphMathHelper.h"
#include "Point.h"

using namespace std;

bool IsPoint2D(Point* p, int leng, Point coord) {
    bool res = false;
    for (int i = 0; i < leng; i++)
    {
        if (p[i] == coord) {
            res = true;
            break;
        }
    }
    return res;
}

int main()
{
    Point* p = (Point*)malloc(4 * sizeof(Point));
    p[0] = Point(2, new double[2] {2, 2});
    p[1] = Point(2, new double[2] {2, 3});
    p[2] = Point(2, new double[2] {3, 2});
    p[3] = Point(2, new double[2] {3, 3});
    //p[4] = Point(2, new double[2] {1, 1});
    //p[5] = Point(2, new double[2] {0, 2});
    //p[6] = Point(2, new double[2] {2, 0});
    //p[7] = Point(2, new double[2] {4, 4});
    //p[8] = Point(2, new double[2] {5, 2});
    //p[9] = Point(2, new double[2] {2, 5});
    
    char* buffer0 = new char[56];
    char* buffer1 = new char[56];

    for (int i = 0; i < 56; i++)
    {
        if ((i % 8 == 0) && (i != 0)) { buffer0[i] = '\n'; continue; }
        Point p0(2, new double[2] { (double)(i % 8), (double)(7 - i / 8)});
        if (!IsPoint2D(p, 4, p0)) 
            buffer0[i] = '0';
        else
        {
            buffer0[i] = '1';
        }
    }

    for (int i = 0; i < 56; i++)
        cout << buffer0[i];
    cin >> buffer0[0];
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
