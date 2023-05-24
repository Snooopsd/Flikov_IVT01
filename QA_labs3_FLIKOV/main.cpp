#include <QCoreApplication>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include "triangle.h"
#include "triangletwo.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 1251");

    std::cout << "Работа методов Get и Put:" << std::endl;
    triangle tri;
    tri.Init(1, 2, 3, 4, 5, 6);
    triangleTwo tri_two;
    tri_two.Init(2, 3, 4, 5, 6, 7, 17);
    std::cout << "Get: " << tri_two.Get() << std::endl;
    tri_two.Put(47);
    std::cout << "Put: " << tri_two.Get() << std::endl;

    std::cout << "\nПерегрузка метеда переметра:" << std::endl;
    std::cout << "Периметр: " << tri_two.Peremeter() << std::endl;

    std::cout << "\nПерегрузка Init и Display:" << std::endl;
    tri_two.Init(9, 20, 45, 66, 3, 16, 10.02);
    tri_two.Display();

    std::cout << "\n\nКонструктор с параметрами:" << std::endl;
    triangleTwo tri_two_one(12, 16, 32, 6, 46, 14, 13.3217);
    tri_two_one.Display();

    std::cout << "\n\nПерегрузка оператора присваивания:" << std::endl;
    tri_two_one = tri;
    tri_two_one.Display();

    std::cout << "\n\nДинамические объекты базового и производного классов:" << std::endl;
    std::cout << "\tБазовый класс:" << std::endl;
    triangle* din_tri = new triangle(5, 8, 1, 9, 11, 72);
    din_tri->Init(13, 17, 99, 311, 9855, 1);
    din_tri->Display();
    std::cout << "Периметр динамического базового класса: " << din_tri->Peremeter() << std::endl;
    std::cout << "\tПроизводный класс:" << std::endl;
    triangleTwo* din_tri_two = new triangleTwo(6, 13, 17, 142, 16, 17, 55.6);
    din_tri_two->Init(1, 2, 3, 4, 5, 6, 11);
    din_tri_two->Display();
    std::cout << "\nПериметр диначеского производного класса: " << din_tri_two->Peremeter() << std::endl;

    delete din_tri;
    delete din_tri_two;
    return a.exec();
}
