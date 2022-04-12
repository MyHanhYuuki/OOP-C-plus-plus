#include <iostream>
#include <iomanip>
#include "Class_BangCuuChuong.h"
using namespace std;

int main()
{
    int pt; // Phuong thuc thuc hien thao tac
    BCC a;
    do
    {
        cout << "\n\t\t\tMENU\n";
        cout << "\t1.  Nhap vao m va n\n";
        cout << "\t2.  In ra man hinh bang cuu chuong m\n";
        cout << "\t3.  In ra man hinh bang cuu chuong tu m den n\n";
        cout << "\t4.  In ra man hinh bang cuu chuong tong hop tu 2 den 9\n";
        cout << "\t0.  Thoat chuong trinh\n";

        cin >> pt;
        switch (pt)
        {
        case 1:
            a.Nhap();
            break;
        case 2:
            cout << "\tBang cuu chuong m\n";
            a.In_BCC();
            break;
        case 3:
            cout << "\tBang cuu chuong tu m den n\n";
            a.In_BCC_NM();
            break;
        case 4:
            cout << "/tBang cuu chuong tong hop\n";
            a.In_BCC_TH();
            break;
        case 0:
            cout << "\tCam on ban da su dung chuong trinh\n";
            break;
        default: // Truong hop nhap sai phuong thuc
            cout << "Phuong thuc khong hop le, vui long nhap lai!!!\n\n";
            break;
        }
        cout << "---------------------------------------------------------------------------------------------";
    } while (pt != 0);

    cout << endl;
    system("pause");
    return 0;
}