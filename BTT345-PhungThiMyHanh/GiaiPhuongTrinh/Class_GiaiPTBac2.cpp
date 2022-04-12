#include <iostream>
#include "Class_GiaiPTBac2.h"
#include <cmath>
using namespace std;

void PTB2::KhoiTao()
{
    a = b = c = 0;
}

void PTB2::KhoiTao(double a)
{
    this->a = a;
    b = c = 0;
}

void PTB2::KhoiTao(double a, double b)
{
    this->a = a;
    this->b = b;
    c = 0;
}

void PTB2::KhoiTao(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

void PTB2::Nhap()
{
    cout << "Nhap he so x^2: ";
    cin >> a;
    cout << "Nhap he so x: ";
    cin >> b;
    cout << "Nhap he so tu do: ";
    cin >> c;
}

void PTB2::GiaiPT()
{
    if (a != 0)
    {
        double denta = b * b - 4 * a * c;
        if (denta < 0)
            cout << "Phuong trinh vo nghiem! ";
        else if (denta > 0)
        {
            double x1 = (-b + sqrt(denta)) / (2 * a);
            double x2 = (-b - sqrt(denta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet: " << x1 << " va " << x2;
        }
        else
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << (-b) / (2 * a);
    }
    else // PTB2 suy bien thanh PTB1
    {
        PTB1 pt;
        pt.KhoiTao(b, c);
        pt.GiaiPT();
    }
}

void PTB2::Xuat()
{  
    cout << a << "x^2 ";
    cout << (b >= 0 ? "+ " : "- ") << fabs(b) << "x ";
    cout << (c >= 0 ? "+ " : "- ") << fabs(c) << " = 0\n";
}