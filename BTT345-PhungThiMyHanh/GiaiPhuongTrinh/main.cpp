#include "Class_GiaiPTBac2.h"
#include <iostream>

using namespace std;

int main()
{
	PTB2* pt;
	int n;
	do 
	{
		cout << "Ban hay nhap vao so luong phuong trinh:\n";
		cin >> n;
	} while (n <= 0);
	pt = new PTB2[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ban hay nhap phuong trinh thu " << i + 1 << ": \n";
		pt[i].Nhap();
	}
	for (int i = 0; i < n; i++)
	{
		cout <<"\nPhuong trinh thu " << i + 1 << " la:\n";
		pt[i].Xuat();
		cout << "=> Ket qua cua phuong trinh thu " << i + 1 << " la:\n";
		pt[i].GiaiPT();
	}
}