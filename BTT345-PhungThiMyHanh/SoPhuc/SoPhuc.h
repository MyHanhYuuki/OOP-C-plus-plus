#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
	double dThuc;
	double dAo;

public:
	double LayPhanThuc();
	double LayPhanAo();

	void NhapSoPhuc();
	void XuatSoPhuc();

	SoPhuc CongSoPhuc(const SoPhuc& n);
	SoPhuc TruSoPhuc(const SoPhuc& n);
	SoPhuc NhanSoPhuc(const SoPhuc& n);
	SoPhuc ChiaSoPhuc(const SoPhuc& n);
};


