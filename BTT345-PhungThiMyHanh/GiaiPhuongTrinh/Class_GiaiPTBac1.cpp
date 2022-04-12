#include <iostream>
#include <cmath>
#include "Class_GiaiPTBac1.h"
using namespace std;

// typedef PTB1 PT;

void PTB1::KhoiTao()
{
    a = b = 0;
}

void PTB1::KhoiTao(double x)
{
    a = 0;
    b = x;
}

void PTB1::KhoiTao(double x, double y)
{
    a = x;
    b = y;
}

void PTB1::Nhap()
{
    cout << "Nhap he so a: ";
    cin >> this->a;
    cout << "Nhap mau so: ";
    cin >> this->b;
}

bool PTB1::KiemTraCoNghiem()
{
    if (a == 0)
        if (b == 0)
            return 0; // Vo so nghiem
        else
            return -1; // Vo nghiem
    return 1;
}

void PTB1::GiaiPT()
{
    if (this->KiemTraCoNghiem() == 1)
    {
        cout << "Phuong trinh co nghiem: ";
        cout << -b / a << endl;
        return;
    }
    else if (this->KiemTraCoNghiem() == -1)
    {
        cout << "Phuong vo nghiem\n";
        return;
    }
    cout << "Phuong trinh co vo so nghiem\n";
}

void PTB1::Xuat()
{
    cout << a << "x ";
    cout << (b >= 0 ? "+ " : "- ") << fabs(b) << " = 0\n";
}