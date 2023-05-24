#ifndef TRIANGLETWO_H
#define TRIANGLETWO_H
#include "triangle.h"
#include "iostream"


class triangleTwo : public triangle
{
private:
    double _distance;

public:
    triangleTwo();
    triangleTwo(int, int, int, int,
                int, int, double);
    void operator =(triangle);
    void Put(double);
    double Get();
    double Peremeter();
    void Init(int, int, int, int, int, int, double);
    void Display();
};

#endif // TRIANGLETWO_H
