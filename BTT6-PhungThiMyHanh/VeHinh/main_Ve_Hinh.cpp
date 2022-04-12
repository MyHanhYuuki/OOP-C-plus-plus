#include <iostream>
#include "Hinh_Ve.h"
using namespace std;

int main()
{
    int oper; // Phuong thuc thuc hien thao tac
    HV a;
    do
    {
        system("cls");
        cout << "----------------CHUONG TRINH VE HINH--------------------\n";
        cout << "\t1.  Nhap vao 1 hinh ve\n";
        cout << "\t2.  Ve hinh chu nhat dac\n";
        cout << "\t3.  Ve hinh chu nhat rong\n";
        cout << "\t4.  Ve tam giac vuong can dac voi chieu cao da nhap\n";
        cout << "\t5.  Ve tam giac vuong can rong voi chieu cao da nhap\n";
        cout << "\t0.  Thoat chuong trinh\n";
        cout << "---------------------------------------------------------\n";

        cout << "Hay nhap vao lua chon cua ban: ";
        cin >> oper;
        switch (oper)
        {
        case 1:
            a.Nhap();
            break;
        case 2:
            a.Ve_HCN_Dac();
            break;
        case 3:
            a.Ve_HCN_Rong();
            break;
        case 4:
            a.Ve_TGVCan_Dac();
            break;
        case 5:
            a.Ve_TGVCan_Rong();
            break;
        case 0:
            cout << "\n\tCam on ban da su dung chuong trinh!\n";
            break;
        default: // Truong hop nhap sai phuong thuc
            cout << "Phuong thuc khong hop le, vui long nhap lai!\n\n";
            break;
        }
        system("pause"); 
    } while (oper != 0);
}