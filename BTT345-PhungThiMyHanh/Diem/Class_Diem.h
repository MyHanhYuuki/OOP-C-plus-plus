#ifndef _CLASS_DIEM
#define _CLASS_DIEM
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <graphics.h>
#include <conio.h>

using namespace std;

class Diem
{
private:
    double x;
    double y;

public:
    Diem();
    Diem(double);
    Diem(double, double);
    double GetX();
    double GetY();
    void SetX(double);
    void SetY(double);
    void SetXY(double, double);
    void Nhap();
    void Xuat();
    void DiChuyen(double, double);
    bool KiemTra2DiemTrungNhau(Diem);
    double KhoangCach(Diem); //Tra ve 1 so thuc la khoang cach cua 2 diem hay do dai 1 canh
    void Ve();
    friend istream& operator>>(istream&, Diem&); //De chong toan tu >>
    friend ostream& operator<<(ostream&, Diem);   //De chong toan tu <<
};

#endif


