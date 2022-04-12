#include "Da_Thuc.h"
#include <cmath>
using namespace std;

DT::DATHUC()
{
    n = 0;
    heso.push_back(0);
}

DT::DATHUC(int bac) // Truyền 1 tham số là bậc của đa thức
{
    n = bac;
    vector<double> hs(n, 0); // Tạm thời thiết lập hệ số của các số hạng là 0
    heso = hs;
}

DT::DATHUC(int bac, vector<double> hs) // Tham số đầu tiên là bậc, tham số int * là mảng chứa hệ số của mỗi số hạng
{
    n = bac;
    heso = hs;
}

int DT::Get_n() // Truy xuất bậc của đa thức
{
    return n;
}

vector<double> DT::Get_heso() // Truy xuất hệ số của các số hạng trong đa thức
{
    return heso;
}

void DT::Set_n(int bac)
{
    n = bac;
}

void DT::Set_heso(vector<double> hs)
{
    heso = hs;
}

void DT::Chuan_Hoa()
{
    // DATHUC có thể bị triệt tiêu, nên cần chuẩn hóa lại sau khi cộng hoặc trừ. VD: DT1 = 1 + x, DT2 = -1 - x, khi cộng tất cả sẽ bị triệt tiêu
    int i = n; // Chạy và triệt tiêu từ cuối mảng về đầu mảng
    while (heso.size() > 1 && heso[i] == 0)
    {
        n--;             // Giảm bậc
        heso.pop_back(); // Xóa hệ số của phần tử bị triệt tiêu này khỏi mảng
        i--;
    }
}

DT DT::Cong(DT dt) // Trả về đa thức tổng của 2 đa thức
{
    DT tong;
    tong.n = (n >= dt.n) ? n : dt.n; // Đa thức tổng sẽ có bậc của Đa thức có bậc lớn nhất
    int size1 = heso.size();
    int size2 = dt.heso.size();
    // Sao chép hệ số của đa thức có bậc lớn hơn vào DATHUC tong
    // Duyệt qua hệ số của đa thức có bậc nhỏ hơn và cộng vào đa thức tổng
    if (size1 >= size2)
    {
        tong.heso = heso;
        for (int i = 0; i < size2; i++)
            tong.heso[i] += dt.heso[i];
    }
    else
    {
        tong.heso = dt.heso;
        for (int i = 0; i < size1; i++)
            tong.heso[i] += heso[i];
    }
    tong.Chuan_Hoa();
    return tong;
}

DT DT::Tru(DT dt) // Trả về đa thức hiệu của 2 đa thức
{
    DT hieu;
    hieu.n = (n >= dt.n) ? n : dt.n; // Đa thức tổng sẽ có bậc của Đa thức có bậc lớn nhất

    int size1 = heso.size();
    int size2 = dt.heso.size();
    // Sao chép hệ số của đa thức có bậc lớn hơn vào DATHUC tong
    // Duyệt qua hệ số của đa thức có bậc nhỏ hơn và cộng vào đa thức tổng
    if (size1 >= size2)
    {
        hieu.heso = heso;
        for (int i = 0; i < size2; i++)
            hieu.heso[i] -= dt.heso[i];
    }
    else
    {
        hieu.heso = dt.heso;
        for (int i = 0; i < size1; i++)
            hieu.heso[i] -= heso[i];
    }

    hieu.Chuan_Hoa();
    return hieu;
}

void DT::Nhan(double a) // Nhân tất cả hệ số của các số hạng cho 1 số
{
    for (int i = 0; i <= n; i++) // Do số số hạng(size) = n + 1. Điều kiện lặp là i < size sẽ tương đương với i <= n
        heso[i] *= a;
}

void DT::Chia(double a) // Chia tất cả hệ số của các số hạng cho 1 số
{
    for (int i = 0; i <= n; i++) // Do số số hạng(size) = n + 1. Điều kiện lặp là i < size sẽ tương đương với i <= n
        heso[i] /= a;
}

bool DT::Kiem_Tra()
{
    if (n < 0)
        return 0;
    return 1;
}

void DT::Nhap()
{
    cout << "Nhap bac cua da thuc:";
    do
    {
        cin >> n;
        if (this->Kiem_Tra() == 0)
            cout << "Bac da thuc khong hop le. Vui long nhap lai!!!\n";
    } while (this->Kiem_Tra() == 0);
    for (int i = 0; i < n + 1; i++) // Số số hạng là n+1
    {
        cout << "Nhap vao he so x^" << i << ": ";
        cin >> heso[i];
    }
}

void DT::Xuat()
{
    this->Chuan_Hoa();
    cout << "Da thuc dang xet la da thuc bac " << n << ". f(x) = ";
    if (heso[0] > 0)
        cout << heso[0] << " ";
    else if (heso[0] < 0)
        cout << "-" << -heso[0];

    if (heso[1] > 0)
        cout << "+ " << heso[1] << "x ";
    else if (heso[1] < 0)
        cout << "- " << -heso[1] << "x ";

    for (int i = 2; i < n + 1; i++)
    {
        if (heso[i] == 0)
            continue;
        else if (heso[i] > 0)
            cout << "+ " << heso[i] << "x^" << i << " ";
        else
            cout << "- " << -heso[i] << "x^" << i << " ";
    }
}

double DT::The_So(double a) // Trả về 1 số là kết quả khi thay x bằng tham số đầu vào. Thế số vào x
{
    double ketqua = heso[0];
    for (int i = 1; i < n + 1; i++) // Do số số hạng(size) = n + 1. Điều kiện lặp là i < size sẽ tương đương với i <= n hay i < n+1
        ketqua += heso[i] * pow(a, i);
    return ketqua;
}