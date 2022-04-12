#include <iostream>
#include "Class_HocSinh.h"
using namespace std;

typedef HOCSINH HS;

void HS::KhoiTao()
{
    ten[0] = NULL;
    van = toan = 0;
}

void HS::KhoiTao(char ten[], int van, int toan)
{
    for (int i = 0; i < strlen(ten); i++)
        this->ten[i] = ten[i];
    this->van = van;
    this->toan = toan;
}

void HS::Nhap()
{
    cout << "Nhap ten cua hoc sinh: ";
    fflush(stdin);
    cin.getline(ten, 30);
    cout << "Nhap diem van cua hoc sinh: ";
    cin >> van;
    cout << "Nhap diem toan cua hoc sinh: ";
    cin >> toan;
}

int HS::Xep_Loai()
{
    double dtb = (van + toan) / 2.0;
    switch ((int)dtb)
    {
    case 9:
    case 10:
        return 1; // Xuất xắc
    case 8:
        return 2; // Giỏi
    case 7:
        return 3; // Khá
    case 6:
    case 5:
        return 4; // Trung bình
    default:
        return 0; // Yếu
    }
}

void HS::Xuat()
{

    cout << "Hoc sinh " << ten << " Co: - Diem van: " << van << " - Diem toan: " << toan;
    double dtb = (van + toan) / 2.0;
    cout << " - Diem trung binh cua hoc sinh " << ten << " la: " << dtb;
    switch (this->Xep_Loai())
    {
    case 1:
        cout << " => Xep loai xuat xac\n";
        return;
    case 2:
        cout << " => Xep loai gioi\n";
        return;
    case 3:
        cout << " => Xep loai kha\n";
        return;
    case 4:
        cout << " => Xep loai trung binh\n";
        return;
    case 0:
        cout << " => Xep loai yeu\n";
        return;
    }
}

