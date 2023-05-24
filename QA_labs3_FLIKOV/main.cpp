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

    std::cout << "������ ������� Get � Put:" << std::endl;
    triangle tri;
    tri.Init(1, 2, 3, 4, 5, 6);
    triangleTwo tri_two;
    tri_two.Init(2, 3, 4, 5, 6, 7, 17);
    std::cout << "Get: " << tri_two.Get() << std::endl;
    tri_two.Put(47);
    std::cout << "Put: " << tri_two.Get() << std::endl;

    std::cout << "\n���������� ������ ���������:" << std::endl;
    std::cout << "��������: " << tri_two.Peremeter() << std::endl;

    std::cout << "\n���������� Init � Display:" << std::endl;
    tri_two.Init(9, 20, 45, 66, 3, 16, 10.02);
    tri_two.Display();

    std::cout << "\n\n����������� � �����������:" << std::endl;
    triangleTwo tri_two_one(12, 16, 32, 6, 46, 14, 13.3217);
    tri_two_one.Display();

    std::cout << "\n\n���������� ��������� ������������:" << std::endl;
    tri_two_one = tri;
    tri_two_one.Display();

    std::cout << "\n\n������������ ������� �������� � ������������ �������:" << std::endl;
    std::cout << "\t������� �����:" << std::endl;
    triangle* din_tri = new triangle(5, 8, 1, 9, 11, 72);
    din_tri->Init(13, 17, 99, 311, 9855, 1);
    din_tri->Display();
    std::cout << "�������� ������������� �������� ������: " << din_tri->Peremeter() << std::endl;
    std::cout << "\t����������� �����:" << std::endl;
    triangleTwo* din_tri_two = new triangleTwo(6, 13, 17, 142, 16, 17, 55.6);
    din_tri_two->Init(1, 2, 3, 4, 5, 6, 11);
    din_tri_two->Display();
    std::cout << "\n�������� ����������� ������������ ������: " << din_tri_two->Peremeter() << std::endl;

    delete din_tri;
    delete din_tri_two;
    return a.exec();
}
