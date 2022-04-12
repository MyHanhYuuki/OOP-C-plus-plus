#ifndef HOCSINH_H
#define HOCSINH_H
#include <cstring>

class HOCSINH
{
    char ten[30];
    int van;
    int toan;

public:
    void KhoiTao();
    void KhoiTao(char[], int, int);
    void Nhap();
    void Xuat();
    double DTB();
    int Xep_Loai();
};

#endif