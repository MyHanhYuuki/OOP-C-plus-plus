#include "PhanSo.h"

int main()
{
	PhanSo a, b;
	PhanSo TongPhanSo, HieuPhanSo;
	PhanSo TichPhanSo, ThuongPhanSo;

	cout << "-------Phan So Thu Nhat--------\n";
	a.NhapPhanSo();
	a.RutGon();
	cout << "Phan so thu nhat ban vua nhap la: \n ";
	a.XuatPhanSo();

	cout << endl;
	cout << "-------Phan So Thu Hai--------\n";
	b.NhapPhanSo();
	b.RutGon();
	cout << "Phan so thu hai ban vua nhap la: \n";
	b.XuatPhanSo();

	cout << endl;
	TongPhanSo = a.CongPhanSo(b);
	cout << "Tong 2 phan so ban vua nhap la: ";
	TongPhanSo.XuatPhanSo();

	HieuPhanSo = a.TruPhanSo(b);
	cout << "Hieu 2 phan so ban vua nhap la: ";
	HieuPhanSo.XuatPhanSo();

	TichPhanSo = a.NhanPhanSo(b);
	cout << "Tich 2 phan so ban vua nhap la: ";
	TichPhanSo.XuatPhanSo();

	ThuongPhanSo = a.ChiaPhanSo(b);
	cout << "Thuong 2 phan so ban vua nhap la: ";
	ThuongPhanSo.XuatPhanSo();
	cout << endl;

	system("pause");
	return 0;
}