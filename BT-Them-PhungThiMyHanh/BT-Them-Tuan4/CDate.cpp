#include "CDate.h"

DATE::DATE()
{
    ng = th = 1;
    n = 0;
}

DATE::DATE(int ngay)
{
    ng = ngay;
    th = n = 1;
}

DATE::DATE(int ngay, int thang)
{
    ng = ngay;
    th = thang;
    n = 1;
}

DATE::DATE(int ngay, int thang, int nam)
{
    ng = ngay;
    th = thang;
    n = nam;
}

int DATE::Get_ng()
{
    return ng;
}

int DATE::Get_th()
{
    return th;
}

int DATE::Get_n()
{
    return n;
}

void DATE::Set_ng(int ngay)
{
    ng = ngay;
}
void DATE::Set_th(int thang)
{
    th = thang;
}

void DATE::Set_n(int nam)
{
    n = nam;
}

void DATE::Set_NgThN(int ngay, int thang, int nam)
{
    ng = ngay;
    th = thang;
    n = nam;
}

bool DATE::KiemTraHopLe()
{
    if (th > 12 || th < 1 || ng < 1)
        return 0;
    switch (th)
    {
        // Truong hop cac thang co 31 ngay
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (ng > 31)
            return 0;
        break;

        // Truong hop cac thang co 30 ngay
    case 4:
    case 6:
    case 9:
    case 11:
        if (ng > 30)
            return 0;
        break;

        // Truong hop thang 2
    case 2:
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) // Kiem tra nam nhuan
            if (ng > 29)
                return 0;
            else
                return 1;
        else if (ng > 28)
            return 0;
        break;
    }

    // Neu vuot qua tat ca cac dieu kien ben tren thi dieu kien nhap chac chan dung
    return 1;
}

void DATE::Nhap()
{
    cout << "Ban hay nhap vao lan luot ngay - thang - nam:\n";
    do
    {
        cout << "\tNhap ngay: ";
        cin >> ng;
        cout << "\tNhap thang: ";
        cin >> th;
        cout << "\tNhap nam: ";
        cin >> n;
        if (this->KiemTraHopLe() == 0)
            cout << "Ngay ban vua nhap khong hop le. Vui long nhap lai!!!\n";
    } while (this->KiemTraHopLe() == 0);
}

void DATE::Xuat()
{
    cout << "Ngay dang xet la: ngay " << ng << " thang " << th << " nam " << n;
}

void DATE::Them_1ng()
{
    switch (th)
    {
    // Truong hop cac thang co 31 ngay
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (ng < 31)
            ng++;
        else // Ngay 31 thi tang thang va dat lai ngay
        {
            th++;
            ng = 1;
        }
        break;
    case 12:
        if (ng < 31)
            ng++;
        else // Ngày 31 tháng 12 thì năm sau sẽ sang năm mới
        {
            th = 1;
            ng = 1;
            n++;
        }
        break;

    // Truong hop thang 2
    case 2:
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) //Neu nam nhuan;
        {
            if (ng < 29)
                ng++;
            else
            {
                th++;
                ng = 1;
            }
        }
        else
        {
            if (ng < 28)
                ng++;
            else
            {
                th++;
                ng = 1;
            }
        }
        break;

    // Truong hop cac thang co 30 ngay
    case 4:
    case 6:
    case 9:
    case 11:
        if (ng < 30)
            ng++;
        else
        {
            th++;
            ng = 1;
        }
        break;
    }
}

void DATE::Bot_1ng()
{
    switch (th)
    {
    case 1:
        if (ng == 1) // Ngày 1 tháng 1, giảm đi 1 ngày sẽ là ngày 31 tháng 12 của năm trước
        {
            th = 12;
            ng = 31;
            n--;
        }
        else
            ng--;
        break;
    case 3:
        if (ng != 1)
            ng--;
        else
        {
            if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) // Nếu năm nhuận
            {
                ng = 29;
                th--;
            }
            else
            {
                ng = 28;
                th--;
            }
        }
        break;
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (ng == 1) // Ngày bằng 1 thì giảm tháng, và đặt lại ngày là 30 vì tháng trước đó là tháng 30 ngày
        {
            th--;
            ng = 30;
        }
        else
            ng--;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (ng == 1)
        {
            th--;
            ng = 31; // Ngày bằng 1 thì giảm tháng, và đặt lại ngày là 31 vì tháng trước đó là tháng 31 ngày
        }
        else
            ng--;
        break;
    case 2:
        if (ng == 1)
        {
            th--;
            ng = 31;
        }
        else
            ng--;
        break;
    }
}

int DATE::KhoangCach(DATE time)
{
    if (this->KiemTraTrung(time))
        return 0;
    int dem = 0;
    DATE tam;
    if (n > time.n)
    {
        tam = time;
        while (this->KiemTraTrung(tam) == 0)
        {
            dem++;
            tam.Them_1ng(); // Tăng ngày lên, đến khi nào 2 ngày trùng nhau
        }
    }
    else if (n == time.n)
    {
        if (th > time.th)
        {
            tam = time;
            while (this->KiemTraTrung(tam) == 0)
            {
                dem++;
                tam.Them_1ng(); // Tăng ngày lên, đến khi nào 2 ngày trùng nhau
            }
        }
        else if (th < time.th)
        {
            tam = *this;
            while (time.KiemTraTrung(tam) == 0)
            {
                dem++;
                tam.Them_1ng(); // Tăng ngày lên, đến khi nào 2 ngày trùng nhau
            }
        }
        else // Năm bằng nhau và tháng cũng bằng nhau
        {
            return abs(ng - time.ng);
        }
    }
    else
    {
        tam = *this;
        while (time.KiemTraTrung(tam) == 0)
        {
            dem++;
            tam.Them_1ng(); // Tăng ngày lên, đến khi nào 2 ngày trùng nhau
        }
    }
    return dem;
}

bool DATE::KiemTraTrung(DATE time)
{
    if (ng != time.ng || th != time.th || n != time.n)
        return 0;
    return 1;
}

DATE DATE::Cong(int a) // Cộng vào ngày đang xét a ngày và trả về ngày mới
{
    DATE cong = *this;
    for (int i = 0; i < a; i++)
        cong.Them_1ng();
    return cong;
}

DATE DATE::Tru(int a) // Cộng vào ngày đang xét a ngày và trả về ngày mới
{
    DATE tru = *this;
    for (int i = 0; i < a; i++)
        tru.Bot_1ng();
    return tru;
}
