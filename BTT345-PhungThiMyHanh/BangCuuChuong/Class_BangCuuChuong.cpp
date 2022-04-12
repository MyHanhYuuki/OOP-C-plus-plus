#include <iostream>
#include <iomanip>
#include "Class_BangCuuChuong.h"
using namespace std;

void BCC::KhoiTao() // Khởi tạo giá trị m và n
{
    m = rand() % (9 - 2) + 2; // Random 1 số từ 2 đến 9
    n = rand() % (9 - 2) + 2; // Random 1 số từ 2 đến 9
}

void BCC::Nhap() // Nhập vào giá trị m va n
{
    do
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 2 || n > 9)
            cout << "Vui long nhap n trong khoang [2;9] !!!\n";
    } while (n < 2 || n > 9);
    do
    {
        cout << "Nhap m: ";
        cin >> m;
        if (m < 2 || m > 9)
            cout << "Vui long nhap m trong khoang [2;9] !!!\n";
    } while (m < 2 || m > 9);
}

void BCC::In_BCC() // In ra màn hình bảng cửu chương n
{
    for (int i = 1; i <= 10; i++)
        cout << n << "  x " << setw(2) << i << " = " << setw(2) << n * i << endl;
}

void BCC::In_BCC_NM() // In ra màn hình bảng cửu chương từ n đến m
{
    if (m <= n)
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = m; j <= n; j++)
            {
                cout << j << "  x " << setw(2) << i << " = " << setw(2) << i * j << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = m; j >= n; j--)
            {
                cout << j << "  x " << setw(2) << i << " = " << setw(2) << i * j << "\t";
            }
            cout << endl;
        }
    }
}

void BCC::In_BCC_TH() // In ra màn hình bảng cửu chương tổng hợp từ 2 đến 9
{
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
}
