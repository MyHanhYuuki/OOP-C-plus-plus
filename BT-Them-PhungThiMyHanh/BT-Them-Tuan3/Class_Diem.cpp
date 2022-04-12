#include "Class_Diem.h"

Diem::Diem() // Không truyền vào tham số, coi như điểm trùng với gốc tọa độ
{
    this->SetXY(0, 0);
}

Diem::Diem(double a) // Truyền vào 1 tham số, gán tham số đó cho hoành độ x
{
    this->SetXY(a, 0);
}

Diem::Diem(double a, double b) // Truyền vào 2 tham số, gán lần lượt cho hoành độ x và tung độ y
{
    this->SetXY(a, b);
}

double Diem::GetX() // Trả về 1 số kiểu double là hoành độ x của điểm đang xét
{
    return x;
}

double Diem::GetY() // Trả về 1 số kiểu double là tung độ y của điểm đang xét
{
    return y;
}

void Diem::SetX(double a) // Thiết lập hoành độ x
{
    x = a;
}

void Diem::SetY(double a) // Thiết lập tung độ y
{
    y = a;
}

void Diem::SetXY(double a, double b) // Thiết lập hoành độ và tung độ
{
    x = a;
    y = b;
}

void Diem::Nhap()
{
    cout << "\tNhap hoanh do: ";
    cin >> x;
    cout << "\tNhap tung do: ";
    cin >> y;
}

void Diem::Xuat()
{
    cout << "Toa do cua diem la: (" << x << ", " << y << ")";
}

void Diem::DiChuyen(double a, double b) // Tịnh tiến tọa độ ban đầu
{
    x += a;
    y += b;
}

bool Diem::KiemTra2DiemTrungNhau(Diem b)
{
    if (this->x == b.x && this->y == b.y)
        return 1;
    return 0;
}

double Diem::KhoangCach(Diem b) // Đồng thời cũng là cạnh của tam giác
{
    double hoanh_hoanh = this->x - b.x;
    double tung_tung = this->y - b.y;
    return sqrt(hoanh_hoanh * hoanh_hoanh + tung_tung * tung_tung);
}

istream &operator>>(istream &is, Diem &d)
{
    cout << "\tNhap hoanh do: ";
    is >> d.x;
    cout << "\tNhap tung do: ";
    is >> d.y;
    return is;
}

ostream &operator<<(ostream &os, Diem d)
{
    os << "Toa do cua diem la: (" << d.x << ", " << d.y << ")";
    return os;
}

void Diem::Ve()
{
    int g = DETECT, gmode;
    initgraph(&g, &gmode, "");     // Khởi động chế độ đồ họa với thư viện graphics.h
    putpixel(this->x, this->y, 4); // Vẽ điểm có tọa độ (x, y) với mã màu số 4, màu đỏ
    getch();
    closegraph(); // Đóng chế độ đồ họa
}