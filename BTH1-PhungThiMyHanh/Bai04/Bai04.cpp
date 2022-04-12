#include <iostream>
#include <cmath>
using namespace std;

bool KiemTraNamNhuan(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int TinhNgayTrongThang(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28 + KiemTraNamNhuan(nam);
    default:
        cout << "So thang nhap khong hop le" << endl;
        return 0;
    }
}

void NhapNgay(int& ngay, int& thang, int& nam)
{
    do
    {
        cout << "\n\nNhap ngay: ";
        cin >> ngay;
        cout << "\nNhap thang: ";
        cin >> thang;
        cout << "\nNhap nam: ";
        cin >> nam;
    }     while (!(ngay > 0 && ngay <= TinhNgayTrongThang(thang, nam)));
}

void XuatNgayMai(int ngay, int thang, int nam)
{
    if (ngay == TinhNgayTrongThang(thang, nam))
        if (thang == 12)
            cout << "1/1/" << nam + 1;
        else
            cout << 1 << "/" << thang + 1 << "/" << nam;
    else
        cout << ngay + 1 << "/" << thang << "/" << nam;
}

int main()
{
    int ngay, thang, nam;
    cout << "Cau 4:";
    NhapNgay(ngay, thang, nam);

    cout << "\nNgay tiep theo la: ";
    XuatNgayMai(ngay, thang, nam);
    cout << "\n";
    return 0;
}
