#include <iostream>
#include <math.h>
using namespace std;


void KTSoChinhPhuong(int n)
{
    double CanBacHai;
    CanBacHai = sqrt((int)n);
    if (CanBacHai * CanBacHai == n)
    {
        cout << "\n -- So ban da nhap la so chinh phuong ! \n";
    }
    else
    cout << "\n -- So ban da nhap la so chinh phuong ! \n";
}

void KTSoNguyenTo(int n)
{
    int bien_dem = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            bien_dem++;
    if (bien_dem == 2)
        cout << "\n -- So ban da nhap la so nguyen to ! \n",n;
    else
        cout << "\n -- So ban da nhap khong phai la so nguyen to ! \n", n;
}

void KTSoHoanThien(int n)
{
    int i, sum;
    sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        cout << "\n -- So ban da nhap la so hoan thien ! \n";
    else
        cout << "\n -- So ban da nhap khong phai la so hoan thien ! \n";
}

void KTSoDoiXung(int n)
{
    int num{}, r, sum = 0;
    for (n = num; num != 0; num = num / 10)
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    if (n == sum)
        cout << "\n -- So ban da nhap la so doi xung !\n";
    else
        cout << "\n -- So ban da nhap khong phai la so doi xung !\n";
}


void main()
{
    int n;
    cout << "Ban hay nhap vao so tu nhien n:\n";
    cin >> n;
    KTSoNguyenTo(n);
    KTSoChinhPhuong(n);
    KTSoHoanThien(n);
    KTSoDoiXung(n);
}


