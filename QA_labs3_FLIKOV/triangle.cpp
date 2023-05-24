#include "triangle.h"


triangle::triangle() {

}

triangle::triangle(int arg_one, int arg_two, int arg_three,
                   int arg_four, int arg_five, int arg_six) {
    x1 = arg_one; y1 = arg_two;
    x2 = arg_three; y2 = arg_four;
    x3 = arg_five; y3 = arg_six;
}

//Метод инициализации
void triangle::Init(int arg_one, int arg_two, int arg_three, int arg_four, int arg_five, int arg_six) {
    x1 = arg_one;
    y1 = arg_two;
    x2 = arg_three;
    y2 = arg_four;
    x3 = arg_five;
    y3 = arg_six;
}

//Метод вывода на экран
void triangle::Display() {
    std::cout << "���������� ������ �����: (" << x1 << ", " << y1 << ")" << std::endl;
    std::cout << "���������� ������ �����: (" << x2 << ", " << y2 << ")" << std::endl;
    std::cout << "���������� ������� �����: (" << x3 << ", " << y3 << ")" << std::endl;

}

//Метод высчитывания периметра
double triangle::Peremeter() {
    double side_A = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double side_B = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double side_C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    double peremeter = abs(side_A) + abs(side_B) + abs(side_C);

    return peremeter;
}

int triangle::GetX(int number) {
    if (number == 1)
        return x1;
    else if (number == 2)
        return x2;
    else if (number == 3)
        return x3;
    else
        return 0;
}

int triangle::GetY(int number) {
    if (number == 1)
        return y1;
    else if (number == 2)
        return y2;
    else if (number == 3)
        return y3;
    else
        return 0;
}
