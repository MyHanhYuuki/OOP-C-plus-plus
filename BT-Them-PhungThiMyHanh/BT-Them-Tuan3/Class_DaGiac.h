#ifndef _CLASS_DAGIAC
#define _CLASS_DAGIAC
#include "Class_Diem.h"
#include <graphics.h>
#include <conio.h>
class DAGIAC
{
    int n;             // Số đỉnh của đa giác
    vector<Diem> dinh; // 1 mảng chứa n đỉnh
public:
    DAGIAC();
    DAGIAC(int, vector<Diem>);
    ~DAGIAC();
    int Get_n();
    vector<Diem> Get_dinh();
    void Set_n(int);
    void Set_dinh(vector<Diem>);
    void Nhap();
    void Xuat();
    void Di_Chuyen(double, double); // Tọa độ của cả các đỉnh đều di chuyển một đoạn tương ứng với tham số đầu vào
    bool Kiem_Tra();                // Kiem tra xem đa giác có hợp lệ không
    void Phong_To(double k);
    void Thu_Nho(double k);
    void Quay(double);
    void Ve();
};
typedef DAGIAC DG;
#endif