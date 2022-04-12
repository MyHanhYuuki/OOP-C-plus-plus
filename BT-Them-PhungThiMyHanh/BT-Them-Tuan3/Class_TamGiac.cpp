#include "Class_TamGiac.h"
using namespace std;

TG::TAMGIAC() : A(0, 0), B(0, 0), C(0, 0)
{
    // Không truyền tham số xem như 3 đỉnh trùng với gốc tọa độ
}

TG::TAMGIAC(double xA, double yA, double xB, double yB, double xC, double yC) : A(xA, yA), B(xB, yB), C(xC, yC)
{
    // 3 cặp tham số kiểu double, mỗi cặp ứng với 1 đỉnh của tam giác
}

TG::TAMGIAC(Diem a, Diem b, Diem c)
{
    // Tham số là 3 điểm -> mỗi điểm ứng với 1 đỉnh của tam giác
    A = a;
    B = b;
    C = c;
}

TG::~TAMGIAC()
{
    delete this;
}

Diem TG::GetA() // Trả về 1 điểm chính là đỉnh A
{
    return A;
}

Diem TG::GetB() // Trả về 1 điểm chính là đỉnh B
{
    return B;
}

Diem TG::GetC() // Trả về 1 điểm chính là đỉnh C
{
    return C;
}

void TG::SetA(double xx, double yy) // Thiết lập tọa độ cho đỉnh A
{
    A.SetXY(xx, yy);
}

void TG::SetB(double xx, double yy)
{
    B.SetXY(xx, yy);
}

void TG::SetC(double xx, double yy)
{
    C.SetXY(xx, yy);
}

void TG::SetABC(Diem a, Diem b, Diem c)
{
}

void TG::Nhap()
{
    do
    {
        cout << "\t\tLan luot nhap vao 3 dinh cua tam giac o day:\n";
        cout << "\tNhap dinh A:";
        cin >> A; // Đã overload phương thức nhập cho đối tượng điểm ở thư viện Diem.cpp
        cout << "\tNhap dinh B:";
        cin >> B; // Đã overload phương thức nhập cho đối tượng điểm ở thư viện Diem.cpp
        cout << "\tNhap dinh C:";
        cin >> C; // Đã overload phương thức nhập cho đối tượng điểm ở thư viện Diem.cpp
        if (this->Kiem_Tra() == 0)
            cout << "\nTam gia ban vua nhap khong hop le!!!\n";
    } while (this->Kiem_Tra() == 0);
}

void TG::Xuat()
{
    if (this->Kiem_Tra() == 0)
    {
        cout << "Tam giac dang xet khong hop le!!!";
        return;
    }
    cout << "Tam giac co 3 dinh lan luot la:\n";
    cout << "Toa do cua dinh A la: (" << A.GetX() << ", " << A.GetY() << ")\n";
    cout << "Toa do cua dinh B la: (" << B.GetX() << ", " << B.GetY() << ")\n";
    cout << "Toa do cua dinh C la: (" << C.GetX() << ", " << C.GetY() << ")\n";
}

void TG::Di_Chuyen(double xx, double yy) // Tọa độ của cả 3 đỉnh đều di chuyển một đoạn tương ứng với tham số đầu vào
{
    A.DiChuyen(xx, yy); // Phương thức di chuyển Diem được cài đặt ở file thư viện Diem.cpp
    B.DiChuyen(xx, yy); // Phương thức di chuyển Diem được cài đặt ở file thư viện Diem.cpp
    C.DiChuyen(xx, yy); // Phương thức di chuyển Diem được cài đặt ở file thư viện Diem.cpp
}

bool TG::Kiem_Tra() // Kiem tra xem tam giác có hợp lệ không
{
    double a = A.KhoangCach(B);
    double b = B.KhoangCach(C);
    double c = C.KhoangCach(A);
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    return 1;
}

void TG::Phong_To(double k)
{
    A.SetXY(A.GetX() * k, A.GetY() * k);
    B.SetXY(B.GetX() * k, B.GetY() * k);
    C.SetXY(C.GetX() * k, C.GetY() * k);
}

void TG::Thu_Nho(double k)
{
    A.SetXY(A.GetX() / k, A.GetY() / k);
    B.SetXY(B.GetX() / k, B.GetY() / k);
    C.SetXY(C.GetX() / k, C.GetY() / k);
}

void TG::Quay(double gocquay)
{
    gocquay = gocquay * M_PI / 180; // Đổi độ sang radian
    //Quay đỉnh A
    A.SetX(A.GetX() * cos(gocquay) - A.GetY() * sin(gocquay));
    A.SetY(A.GetX() * sin(gocquay) + A.GetY() * cos(gocquay));
    //Quay đỉnh B
    B.SetX(B.GetX() * cos(gocquay) - B.GetY() * sin(gocquay));
    B.SetY(B.GetX() * sin(gocquay) + B.GetY() * cos(gocquay));
    //Quay đỉnh C
    C.SetX(C.GetX() * cos(gocquay) - C.GetY() * sin(gocquay));
    C.SetY(C.GetX() * sin(gocquay) + C.GetY() * cos(gocquay));
}

void TG::Ve()
{
    int g = DETECT, gmode;
    initgraph(&g, &gmode, "");                    // Khởi động chế độ đồ họa với thư viện graphics.h
    line(A.GetX(), A.GetX(), B.GetX(), B.GetY()); // Vẽ đường thẳng nối điểm A và B
    line(B.GetX(), B.GetY(), C.GetX(), C.GetY()); // Vẽ đường thẳng nối điểm B và C
    line(A.GetX(), A.GetY(), C.GetX(), C.GetY()); // Vẽ đường thẳng nối điểm A và C
    getch();
    closegraph();
}