#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cmath>
#include <iostream>


class triangle
{
protected: //Закрытые поля класса
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int x3 = 0;
    int y3 = 0;

public: //Открытые методы для обращения к полям и обработки объектов
    triangle();
    triangle(int, int, int, int, int, int);
    void Init(int, int, int, int, int, int);
    void Display();
    double Peremeter();
    int GetX(int);
    int GetY(int);
};

#endif // TRIANGLE_H
