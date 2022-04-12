#include <iostream>
#include <stdio.h>
using namespace std;

struct HocSinh
{
    char HoTen[20];
    double DiemToan;
    double DiemVan;
};

void NhapHocSinh(HocSinh& n)
{
    fflush(stdin);

    cout << "Nhap vao Ho ten: ";
    cin.getline(n.HoTen, 20);
    do
    {
        cout << "Nhap vao diem Toan: ";
        cin >> n.DiemToan;

        cout << "Nhap vao diem Van: ";
        cin >> n.DiemVan;
    } while (n.DiemToan < 0.0 || n.DiemVan < 0.0);
}

double TinhDTB(HocSinh& n)
{
    return (n.DiemToan + n.DiemVan) / 2;
}

int main()
{
    HocSinh n;
    NhapHocSinh(n);
    double dtb = TinhDTB(n);
    cout << "Diem trung binh cua hoc sinh la: " << dtb;
}