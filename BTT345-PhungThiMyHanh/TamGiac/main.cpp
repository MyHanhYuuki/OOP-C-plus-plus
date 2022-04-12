#include "Class_TamGiac.h"
#include <iostream>

using namespace std;

int main()
{
	TAMGIAC* tg;
	int n;
	do
	{
		cout << "Ban hay nhap vao so luong tam giac:\n";
		cin >> n;
	} while (n <= 0);
	tg = new TAMGIAC[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ban hay nhap tam giac thu " << i + 1 << ": \n";
		tg[i].Nhap();
	}
	for (int i = 0; i < n; i++)
	{
		cout << "\n\tTAM GIAC THU " << i + 1;
		tg[i].Xuat();

		cout << "\nPhan loai tam giac thu " << i + 1 << ": ";
		int a = tg[i].Phan_Loai();
		switch (a)
		{
		case -1:
			cout << "Khong phai tam giac!";
		case 1:
			cout << "Tam giac deu!";
			break;
		case 2:
			cout << "Tam giac vuong can!";
			break;
		case 3:
			cout << "Tam giac can!";
			break;
		case 4:
			cout << "Tam giac vuong!";
			break;
		default:
			cout << "Tam giac thuong!";
			break;
		}

		cout << "\nChu vi cua tam giac thu " << i + 1 << " la: ";
		cout << tg[i].Chu_Vi();

		cout << "\nDien tich cua tam giac thu " << i + 1 << ": ";
		cout << tg[i].Dien_Tich();

		cout << "\n------------------------------------------------------------\n";
	}
}