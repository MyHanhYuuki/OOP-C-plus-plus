#include "PhanSo.h"

int PhanSo::UCLN(int Tu, int Mau)
{
	if (Mau == 0)
		return Tu;
	return UCLN(Mau, Tu % Mau);
}

int PhanSo::LayTuSo()
{
	return iTu;
}

int PhanSo::LayMauSo()
{
	return iMau;
}

void PhanSo::NhapPhanSo()
{
	do
	{
		cout << "Ban hay nhap vao tu so: \n";
		cin >> iTu;
		cout << "Ban hay nhap vao mau so (mau phai khac 0): \n";
		cin >> iMau;
	} while (iMau == 0);
}

void PhanSo::RutGon()
{
	int gcd = UCLN(iTu, iMau);
	iTu = iTu / gcd;
	iMau = iMau / gcd;
}

void PhanSo::XuatPhanSo()
{
	if (iTu % iMau == 0.0)
		cout << iTu / iMau << endl;
	else
		cout << iTu << "/" << iMau << endl;
}

PhanSo PhanSo::CongPhanSo(const PhanSo& n)
{
	int tu1 = this->iTu * n.iMau;
	int tu2 = this->iMau * n.iTu;

	int mauchung = this->iMau * n.iMau;
	int gcd = UCLN(tu1 + tu2, mauchung);

	PhanSo tong;
	tong.iTu = (tu1 + tu2) / gcd;
	tong.iMau = mauchung / gcd;

	return tong;
}

PhanSo PhanSo::TruPhanSo(const PhanSo& n)
{
	int tu1 = this->iTu * n.iMau;
	int tu2 = this->iMau * n.iTu;

	int mauchung = this->iMau * n.iMau;
	int gcd = UCLN(tu1 - tu2, mauchung);

	PhanSo hieu;
	hieu.iTu = (tu1 - tu2) / gcd;
	hieu.iMau = mauchung / gcd;

	return hieu;
}

PhanSo PhanSo::NhanPhanSo(const PhanSo& n)
{
	int tu = this->iTu * n.iTu;
	int mauchung = this->iMau * n.iMau;
	int gcd = UCLN(tu, mauchung);

	PhanSo tich;
	tich.iTu = tu / gcd;
	tich.iMau = mauchung / gcd;

	return tich;
}

PhanSo PhanSo::ChiaPhanSo(const PhanSo& n)
{
	int tu = this->iTu * n.iMau;
	int mauchung = this->iMau * n.iTu;
	int gcd = UCLN(tu, mauchung);

	PhanSo thuong;
	thuong.iTu = tu / gcd;
	thuong.iMau = mauchung / gcd;

	return thuong;
}
