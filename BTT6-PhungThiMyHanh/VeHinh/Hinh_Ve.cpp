#include "Hinh_Ve.h"

HINHVE::HINHVE()
{
    h = w = 1;
}

HINHVE::HINHVE(int a)
{
    h = a;
    w = 1;
}

HINHVE::HINHVE(int a, int b)
{
    h = a;
    w = b;
}

void HV::Nhap()
{
    do
    {
        cout << "Nhap chieu cao: ";
        cin >> h;
        if (h <= 0)
        {
            cout << "Vui long nhap chieu cao > 0 !";
            continue;
        }
        cout << "Nhap chieu rong: ";
        cin >> w;
        if (w <= 0)
        {
            cout << "Vui long nhap chieu rong > 0 !";
            continue;
        }
    } while (h <= 0 || w <= 0);
}

void HV::Ve_HCN_Dac()
{
    cout << "\tHinh chu nhat dac chieu cao " << h << ", chieu rong " << w << endl;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void HV::Ve_HCN_Rong()
{
    cout << "\tHinh chu nhat rong chieu cao " << h << ", chieu rong " << w << endl;
    for (int i = 1; i <= w; i++)
        cout << " * ";
    cout << endl;

    for (int i = 2; i < h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (j == 1 || j == w)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    for (int i = 1; i <= w; i++)
        cout << " * ";
    cout << endl;
}

void HV::Ve_TGVCan_Dac() //ve theo do cao h
{
    cout << "\tTam giac vuong can dac chieu cao " << h << endl;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h; j++)
            if (j <= h - i)
                cout << "   ";
            else
                cout << " * ";
        cout << endl;
    }
}

void HV::Ve_TGVCan_Rong()
{
    cout << "\tTam giac vuong can rong chieu cao " << h << endl;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            if (i == h)
            {
                cout << " * ";
                continue;
            }
            if (j == h || j == h - i + 1)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}
