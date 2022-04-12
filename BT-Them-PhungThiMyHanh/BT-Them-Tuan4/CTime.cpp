#include "CTime.h"

bool CTIME::Kiem_Tra_Chuan()
{
    if (s >= 60 || m >= 60)
        return 0;
    return 1;
}

void CTIME::Nhap() // Nhập vào 1 thời điểm gồm 3 thành phần giờ, phút, giây
{
    do
    {
        cout << "Nhap vao lan luot gio - phut - giay cua thoi diem:\n";
        cout << "\tNhap gio: ";
        cin >> h;
        cout << "\tNhap phut: ";
        cin >> m;
        cout << "\tNhap giay: ";
        cin >> s;
        if (this->Kiem_Tra_Chuan() == 0)
            cout << "Thoi diem ban nhap chua chuan. Vui long nhap lai!!!\n";
    } while (this->Kiem_Tra_Chuan() == 0);
}

void CTIME::Xuat() // Xuất 1 thời điểm
{
    cout << "Thoi diem dang xet la: " << h << " gio, " << m << " phut, " << s << " giay";
}

void CTIME::Cong(int ss) // Cộng vào thời điểm đang xét một số nguyên giây
{
    s += ss;
    this->Chuan_Hoa();
}

void CTIME::Tru(int ss) // Trừ vào thời điểm đang xét một số nguyên giây
{
    while (s < ss) // Nếu thời điểm đang xét có số giây nhỏ hơn thì đổi thêm từ phút sang để tránh bị số âm
    {
        s += 60;
        m--;
    }
    s -= ss;
    this->Chuan_Hoa();
}

CTimeSpan CTIME::Tru(CTIME time) // Trừ 2 thời điểm để được 1 khoảng thời gian
{
    CTimeSpan temp1(h, m, s);
    CTimeSpan temp2(time.h, time.m, time.s);
    CTimeSpan output = temp1.Tru(temp2); // Dùng lại hàm tru của lớp CTimeSpan
    return output;
}

void CTIME::Them_1s() // Thêm 1 giây
{
    s++;
}

void CTIME::Bot_1s() // Bớt 1 giây
{
    s--;
}