#include <iostream>
#include <iomanip>

using namespace std;
void Xoa()
{
    system("cls");
}
void Dunglairoixoa()
{
    cout << endl;
    system("pause");
    Xoa();
}
void Menu()
{
    Xoa();
    cout << "\n-----------MENU LUA CHON-----------\n";
    cout << "\nMenu co cac yeu cau sau:";
    cout << "\n1.Khoi tao n voi gia tri mac dinh (n = 1)";
    cout << "\n2.Nhap gia tri cua n";
    cout << "\n3.Lay gia tri cua n";
    cout << "\n4.Thay doi gia tri cua n";
    cout << "\n5.Xuat gia tri cua n";
    cout << "\n6.Kiem tra so nguyen to";
    cout << "\n7.Kiem tra so chinh phuong";
    cout << "\n8.Kiem tra so hoan thien";
    cout << "\n9.Kiem tra so doi xung";
    cout << "\n10.Kiem tra tat ca";
    cout << "\n0.Thoat chuong trinh";
    cout << "\nHay nhap vao con so yeu cau cua ban: ";
}

class SoDB
{
private:
    int n;
public:
    SoDB(int = 1);
    int  GetN();
    void SetN(int);
    void Nhap();
    int  Checksont();
    void Xuat();
    void Xuatcheck();
    int  Checksocp();
    void Xuatcp();
    void Checksohoanthien();
    void Checksodoixung();
};

void SoDB::Xuatcp()
{

    if (this->Checksocp()) cout << n << " => La so chinh phuong!";
    else cout << n << " => Khong la so chinh phuong!";
}

void SoDB::Checksodoixung()
{
    int Sodaonguoc = 0;
    int x = n;
    while (x != 0)
    {
        int temp = x % 10;
        Sodaonguoc = Sodaonguoc * 10 + temp;
        x /= 10;
    }
    cout << "\n";
    if (Sodaonguoc == n) cout << n << " => La so doi xung!";
    else cout << n << " => Khong la so doi xung!";
}

void SoDB::Checksohoanthien()
{
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) temp += i; 
    }
    if (temp == n) cout << "\n" << n << " => La so hoan thien!"; else cout << "\n" << n << " khong la so hoan thien";
}

int SoDB::Checksocp()
{
    if (n < 0) return 0;
    int temp = sqrt(n);
    if ((temp * temp) == n) return 1;
    else return 0;
}

void SoDB::Xuat()
{
    cout << "\nn: " << this->n;
}

int SoDB::Checksont()
{
    int sum = 0;
    if (n < 2) return 1;
    if (n == 2 || n == 3)
    {
        sum = 0;
        return 0;
    }
    else if (n < 0) return 1;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                sum++;
            }
        }
    }
    return sum;
}

SoDB::SoDB(int n)
    : n(n)
{}

int SoDB::GetN()
{
    return this->n;
}

void SoDB::SetN(int n)
{
    this->n = n;
}

void SoDB::Nhap()
{
    do
    {
        cout << "Ban hay nhap n ( n > 0 ): ";
        cin >> this->n;
    } while (this->n <= 0);
}

int main()
{
    Xoa();
    SoDB n;
    int a = n.GetN();
    while (1)
    {
        Menu();
        int lc;
        cin >> lc;
        Xoa();
        switch (lc)
        {
        case 1: cout << "=> Da khoi tao!";
            Dunglairoixoa();
            break;
        case 2: n.Nhap();
            cout << "=> Da luu gia tri!";
            Dunglairoixoa();
            break;
        case 3: cout << "=> Da lay gia tri cua n!";
            Dunglairoixoa();
            break;
        case 4:
            int x;
            do
            {
                cout << "Hay nhap gia tri muon thay doi (lon hon 0): ";
                cin >> x;
            } while (x <= 0);
            n.SetN(x);
            cout << "=> Da thay doi gia tri!";
            Dunglairoixoa();
            break;
        case 5:
            a = n.GetN();
            cout << "n : " << a;
            Dunglairoixoa();
            break;
        case 6:
            a = n.GetN();
            if (n.Checksont() == 0)
            {
                cout << a << " => La so nguyen to!" << endl;
                Dunglairoixoa();
            }
            else
            {
                cout << a << " => Khong la so nguyen to!" << endl;
                Dunglairoixoa();
            }
            break;
        case 7:
            n.Xuatcp();
            Dunglairoixoa();
            break;
        case 8:
            n.Checksohoanthien();
            Dunglairoixoa();
            break;
        case 9:
            n.Checksodoixung();
            Dunglairoixoa();
            break;
        case 10:
            a = n.GetN();
            if (n.Checksont() == 0)
            {
                cout << a << " => La so nguyen to!" << endl;
            }
            else
            {
                cout << a << " => Khong la so nguyen to!" << endl;
            }
            if (n.Checksocp()) cout << a << " => La so chinh phuong!";
            else cout << a << " => Khong la so chinh phuong!";
            n.Checksohoanthien();
            n.Checksodoixung();
            Dunglairoixoa();
            break;
        case 0:
            cout << "Thoat chuong trinh!";
            Dunglairoixoa();
            return 0;
        default:
            break;
        }
    }
}