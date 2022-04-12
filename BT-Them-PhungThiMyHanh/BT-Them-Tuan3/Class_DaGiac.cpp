#include "Class_DaGiac.h"

DG::DAGIAC() // Không truyền tham số xem như là 1 điểm, điểm này chính là gốc tọa độ
{
    n = 1;
    Diem O(0, 0);
    dinh.push_back(O);
}

DG::DAGIAC(int so_dinh, vector<Diem> d)
{
    n = so_dinh;
    dinh = d;
}
DG::~DAGIAC()
{
    delete this;
}
int DG::Get_n()
{
    return n;
}
vector<Diem> DG::Get_dinh()
{
    return dinh;
}
void DG::Set_n(int n)
{
    this->n = n;
}
void DG::Set_dinh(vector<Diem> d)
{
    dinh = d;
}
void DG::Nhap()
{
    dinh.clear(); // Xóa dữ liệu cũ để nhập dữ liệu mới
    Diem d;
    cout << "Nhap vao so dinh cua da giac: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap vao toa do dinh thu " << i + 1 << endl;
        cin >> d;
        dinh.push_back(d);
    }
}
void DG::Xuat()
{
    cout << "Da giac " << n << " dinh: ";
    for (int i = 0; i < n; i++)
        cout << "(" << dinh[i].GetX() << ", " << dinh[i].GetY() << ") ";
}
void DG::Di_Chuyen(double xx, double yy) // Tọa độ của cả các đỉnh đều di chuyển một đoạn tương ứng với tham số đầu vào
{
    for (int i = 0; i < n; i++)
        dinh[i].DiChuyen(xx, yy);
}
bool Kiem_Tra(); // Kiem tra xem đa giác có hợp lệ không
void DG::Phong_To(double k)
{
    for (int i = 0; i < n; i++)
    {
        dinh[i].SetX(dinh[i].GetX() * k);
        dinh[i].SetY(dinh[i].GetY() * k);
    }
}
void DG::Thu_Nho(double k)
{
    for (int i = 0; i < n; i++)
    {
        dinh[i].SetX(dinh[i].GetX() / k);
        dinh[i].SetY(dinh[i].GetY() / k);
    }
}

void DG::Quay(double gocquay) // Góc quay đơn vị độ
{
    gocquay = (gocquay * M_PI) / 180; // Đổi góc quay về đơn vị radian
    int X, Y;
    for (int i = 0; i < n; i++)
    {
        X = dinh[i].GetX();
        Y = dinh[i].GetY();
        // Bắt đầu quay
        dinh[i].SetX(X * cos(gocquay) - Y * sin(gocquay));
        dinh[i].SetY(X * sin(gocquay) + Y * cos(gocquay));
    }
}
void DG::Ve()
{
    int g = DETECT, gmode;
    initgraph(&g, &gmode, ""); // Khởi động chế độ đồ họa với thư viện graphics.h
    int n = dinh.size();
    for (int i = 0; i < n - 1; i++) // Vẽ các cạnh của các đỉnh kề nhau của đa giác
        line(dinh[i].GetX(), dinh[i].GetY(), dinh[i + 1].GetX(), dinh[i + 1].GetY());
    line(dinh[0].GetX(), dinh[0].GetY(), dinh[n - 1].GetX(), dinh[n - 1].GetY()); // Vẽ cạnh nối đỉnh đầu tiên và đỉnh cuối cùng
    getch();
    closegraph(); // Đóng chế độ đồ họa
}