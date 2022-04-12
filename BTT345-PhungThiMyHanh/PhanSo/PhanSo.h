#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int iTu;
	int iMau;
	int UCLN(int iTu, int iMau);

public:
	int LayTuSo();
	int LayMauSo();

	void NhapPhanSo();
	void RutGon();
	void XuatPhanSo();

	PhanSo CongPhanSo(const PhanSo& n);
	PhanSo TruPhanSo(const PhanSo& n);
	PhanSo NhanPhanSo(const PhanSo& n);
	PhanSo ChiaPhanSo(const PhanSo& n);
};