#include "CTimeSpan.h"
#include <iostream>

using namespace std;

CTP::CTimeSpan()
{
    h = m = s = 0;
}

CTP::CTimeSpan(int hh)
{
    h = hh;
    m = s = 0;
}

CTP::CTimeSpan(int hh, int mm)
{
    h = hh;
    m = mm;
    s = 0;
}

CTP::CTimeSpan(int hh, int mm, int ss)
{
    h = hh;
    m = mm;
    s = ss;
}

int CTP::Get_h()
{
    return h;
}

int CTP::Get_m()
{
    return m;
}

int CTP::Get_s()
{
    return s;
}

CTP CTP::Get_CTIMESPAN()
{
    return *this;
}

void CTP::Set_h(int hh)
{
    h = hh;
}

void CTP::Set_m(int mm)
{
    m = mm;
}

void CTP::Set_s(int ss)
{
    s = ss;
}

void CTP::Set(int hh, int mm, int ss)
{
    h = hh;
    m = mm;
    s = ss;
}

void CTP::Nhap()
{
    cout << "Nhap vao mot khoang thoi gian:\n";
    cout << "\tNhap gio: ";
    cin >> h;
    cout << "\tNhap phut: ";
    cin >> m;
    cout << "\tNhap giay: ";
    cin >> s;
}
void CTP::Chuan_Hoa() // Chuẩn hóa khoảng thời gian, giả sử 1 khoảng thời gian 1h 80m 90s sẽ cần chuẩn hóa
{
    while (s >= 60) // Đổi giây sang phút nếu số giây >= 60
    {
        s -= 60;
        m++;
    }
    while (m >= 60) // Đổi phút sang giờ nếu số phút >= 60
    {
        m -= 60;
        h++;
    }
}

void CTP::Xuat()
{
    this->Chuan_Hoa();
    cout << "Khoang thoi gian dang xet la: " << h << " gio, " << m << " phut, " << s << " giay";
}

CTP CTP::Cong(CTP a)
{
    CTP tong;
    tong.s = s + a.s;
    tong.m = m + a.m;
    tong.h = h + a.h;
    tong.Chuan_Hoa();
    return tong;
}

CTP CTP::Tru(CTP time)
{
    int a = h * 60 * 60 + m * 60 + s;                // Quy đổi ra giây
    int b = time.h * 60 * 60 + time.m * 60 + time.s; // Quy đổi ra giây
    CTP hieu;
    if (a >= b)
        hieu.Set_s(a - b);
    else
        hieu.Set_s(b - a);
    hieu.Chuan_Hoa();
    return hieu;
}

bool CTP::Bang_Nhau(CTP time) // Trả về 1 nếu 2 CTP này bằng nhau, ngược lại trả về 0
{
    if (h != time.h || m != time.m || s != time.s)
        return 0;
    return 1;
}

bool CTP::Khac_Nhau(CTP time) // Trả về 1 nếu 2 CTP này khác nhau, ngược lại trả về 0
{
    return !(this->Bang_Nhau(time));
}

bool CTP::Lon_Hon(CTP time)
{
    // Quy đổi ra cùng đơn vị giây để so sánh
    int n1 = h * 60 * 60 + m * 60 + s;
    int n2 = time.h * 60 * 60 + time.m * 60 + time.s;
    if (n1 > n2)
        return 1;
    return 0;
}

bool CTP::Nho_Hon(CTP time)
{
    // Quy đổi ra cùng đơn vị giây để so sánh
    int n1 = h * 60 * 60 + m * 60 + s;
    int n2 = time.h * 60 * 60 + time.m * 60 + time.s;
    if (n1 < n2)
        return 1;
    return 0;
}

bool CTP::Lon_Hon_Hoac_Bang(CTP time) // Phủ định của nhỏ hơn là lớn hơn hoặc bằng
{
    return !(this->Nho_Hon(time));
}

bool CTP::Nho_Hon_Hoac_Bang(CTP time) // Phủ định của lớn hơn là nhỏ hơn hoặc bằng
{
    return !(this->Lon_Hon(time));
}