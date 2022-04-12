#include "SoPhuc.h"

int main()
{
	SoPhuc a, b;
	SoPhuc TongSoPhuc, HieuSoPhuc;
	SoPhuc TichSoPhuc, ThuongSoPhuc;

	cout << "---------So Phuc Thu Nhat---------\n";
	a.NhapSoPhuc();
	cout << "So phuc thu nhat ban vua nhap la: ";
	a.XuatSoPhuc();

	cout << endl;
	cout << "---------So Phuc Thu Hai-----------\n";
	b.NhapSoPhuc();
	cout << "So phuc thu hai ban vua nhap la: ";
	b.XuatSoPhuc();

	cout << endl;
	TongSoPhuc = a.CongSoPhuc(b);
	cout << "Tong 2 so phuc vua nhap la: ";
	TongSoPhuc.XuatSoPhuc();

	HieuSoPhuc = a.TruSoPhuc(b);
	cout << "Hieu 2 so phuc vua nhap la: ";
	HieuSoPhuc.XuatSoPhuc();

	TichSoPhuc = a.NhanSoPhuc(b);
	cout << "Tich 2 so phuc vua nhap la: ";
	TichSoPhuc.XuatSoPhuc();

	ThuongSoPhuc = a.ChiaSoPhuc(b);
	cout << "Thuong 2 so phuc vua nhap la: ";
	ThuongSoPhuc.XuatSoPhuc();
	cout << endl;

	system("pause");
	return 0;
}
