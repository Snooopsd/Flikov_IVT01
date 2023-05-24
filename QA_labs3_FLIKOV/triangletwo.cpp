#include "triangletwo.h"

triangleTwo::triangleTwo() : triangle() {

}

triangleTwo::triangleTwo(int arg_one, int arg_two, int arg_three,
                         int arg_four, int arg_five, int arg_six,
                         double distance) : triangle(arg_one, arg_two, arg_three,
                                                     arg_four, arg_five, arg_six) {
    _distance = distance;
}

void triangleTwo::operator=(triangle tri) {
    this->_distance = sqrt(pow(tri.GetX(1) - tri.GetX(2), 2) + pow(tri.GetY(1) - tri.GetY(2), 2));
}

void triangleTwo::Put(double distance) {
    _distance = distance;
}

double triangleTwo::Get() {
    return _distance;
}

double triangleTwo::Peremeter() {
    double side_a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double side_b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double side_c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    return abs(side_a) + abs(side_b) + abs(side_c) + _distance;
}

void triangleTwo::Display() {
    triangle::Display();
    std::cout << "Расстояние между треугольниками: " << _distance;
}

void triangleTwo::Init(int arg_one, int arg_two, int arg_three,
                       int arg_four, int arg_five, int arg_six, double distance) {
    triangle::Init(arg_one, arg_two, arg_three, arg_four, arg_five, arg_six);
    _distance = distance;
}
