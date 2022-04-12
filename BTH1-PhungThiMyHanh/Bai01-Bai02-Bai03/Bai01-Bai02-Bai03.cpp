#include <iostream>
#include <cmath>
using namespace std;

//1. Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.
struct PhanSo
{
    int iTu;
    int iMau;
};

int TinhGCD(int a, int b)
{
    if (b == 0)
        return a;
    return TinhGCD(b, a % b);
}

void NhapPhanSo(PhanSo& n)
{
    do
    {
        cout << "Nhap vao tu so:\n";
        cin >> n.iTu;
        cout << "Nhap vao mau so (khac 0):\n";
        cin >> n.iMau;
    }     while (n.iMau == 0);

    int gcd = TinhGCD(n.iTu, n.iMau);
    n.iTu /= gcd;
    n.iMau /= gcd;
}

void XuatPhanSo(PhanSo n)
{
    cout << "Phan so vua nhap la: ";
    cout << n.iTu << "/" << n.iMau << endl;
}


// 2. Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.
void TimPhanSoMax(PhanSo a, PhanSo b)
{
    int tu1 = a.iTu * b.iMau;
    int tu2 = b.iTu * a.iMau;

    cout << "Phan so lon nhat la: ";
    if (tu1 == tu2)
        cout << "2 phan so bang nhau";
    else if (tu1 > tu2)
        cout << a.iTu << "/" << a.iMau << endl;
    else
        cout << b.iTu << "/" << b.iMau << endl;
}


//3.	Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.
void Tinh_Tong_Hieu_Tich_Thuong(PhanSo a, PhanSo b)
{
    int tu1 = a.iTu * b.iMau;
    int tu2 = b.iTu * a.iMau;
    int mauchung = a.iMau * b.iMau;
    int gcd;
    PhanSo tong, hieu, tich, thuong;

    gcd = TinhGCD(tu1 + tu2, mauchung);
    tong.iTu = (tu1 + tu2) / gcd;
    tong.iMau = mauchung / gcd;
    cout << "Tong 2 phan so la: ";
    if (tong.iTu % tong.iMau == 0.0)
        cout << tong.iTu / tong.iMau << endl;
    else
        cout << tong.iTu << "/" << tong.iMau << endl;

    int hieu_itu = max(tu1, tu2) - min(tu1, tu2);
    gcd = TinhGCD(hieu_itu, mauchung);
    hieu.iTu = hieu_itu / gcd;
    hieu.iMau = mauchung / gcd;
    cout << "Hieu 2 phan so la: ";
    if (hieu.iTu % hieu.iMau == 0)
        cout << hieu.iTu / hieu.iMau << endl;
    else
        cout << hieu.iTu << "/" << hieu.iMau << endl;

    tich.iTu = a.iTu * b.iTu;
    tich.iMau = a.iMau * b.iMau;
    gcd = TinhGCD(tich.iTu, tich.iMau);
    cout << "Tich 2 phan so la: ";
    if (tich.iTu % tich.iMau == 0.0)
        cout << tich.iTu / tich.iMau << endl;
    else
        cout << tich.iTu / gcd << "/" << tich.iMau / gcd << endl;

    thuong.iTu = a.iTu * b.iMau;
    thuong.iMau = a.iMau * b.iTu;
    gcd = TinhGCD(thuong.iTu, thuong.iMau);
    cout << "Thuong 2 phan so la: ";
    if (thuong.iTu % thuong.iMau == 0.0)
        cout << thuong.iTu / thuong.iMau << endl;
    else
        cout << thuong.iTu / gcd << "/" << thuong.iMau / gcd << endl;
}


int main()
{                        
    PhanSo a, b;

    cout << "Cau 1:\n";
    cout << "------Nhap phan so thu 1:-----\n ";
    NhapPhanSo(a);
    XuatPhanSo(a);

    cout << "\n------Nhap phan so thu 2:-----\n ";
    NhapPhanSo(b);                                                    
    XuatPhanSo(b);

    cout << "\nCau 2:\n";
    cout << "\n------So lon nhat trong 2 phan so------\n";
    TimPhanSoMax(a, b);

    cout << "\nCau 3:\n";
    cout << "\n------Tong, hieu, tich, thuong cua 2 phan so-----\n";
    Tinh_Tong_Hieu_Tich_Thuong(a, b);
    return 0;
}
