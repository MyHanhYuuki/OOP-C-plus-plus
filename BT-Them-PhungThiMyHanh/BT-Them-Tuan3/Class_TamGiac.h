#ifndef _CLASS_TAMGIAC
#define _CLASS_TAMGIAC
#include "Class_Diem.h"
#include <graphics.h>
#include <conio.h>

class TAMGIAC
{
    Diem A, B, C;

public:
    TAMGIAC();
    TAMGIAC(double, double, double, double, double, double);
    TAMGIAC(Diem, Diem, Diem);
    ~TAMGIAC();
    Diem GetA();
    Diem GetB();
    Diem GetC();
    void SetA(double, double);
    void SetB(double, double);
    void SetC(double, double);
    void SetABC(Diem, Diem, Diem);
    void Nhap();
    void Xuat();
    void Di_Chuyen(double, double); // Tọa độ của cả 3 đỉnh đều di chuyển 1 đoạn tương ứng với tham số đầu vào
    bool Kiem_Tra();                // Kiem tra xem tam giác có hợp lệ không
    void Phong_To(double);
    void Thu_Nho(double);
    void Quay(double);
    void Ve();
};
typedef TAMGIAC TG;

#endif