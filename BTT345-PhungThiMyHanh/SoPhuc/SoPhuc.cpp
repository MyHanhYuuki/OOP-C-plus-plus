#include "SoPhuc.h"

double SoPhuc::LayPhanThuc()
{
	return dThuc;
}

double SoPhuc::LayPhanAo()
{
	return dAo;
}

void SoPhuc::NhapSoPhuc()
{
	cout << "Ban hay nhap vao phan thuc cua so phuc: \n ";
	cin >> dThuc;
	cout << "Ban hay nhap vao phan ao cua so phuc: \n";
	cin >> dAo;
}

void SoPhuc::XuatSoPhuc()
{
	if (dAo > 0)
		cout << dThuc << " + " << dAo << "i" << endl;
	else if (dAo < 0)
		cout << dThuc << " - " << -dAo << "i" << endl;
	else
		cout << dThuc << endl;
}

SoPhuc SoPhuc::CongSoPhuc(const SoPhuc& n)
{
	SoPhuc tong;

	tong.dThuc = dThuc + n.dThuc;
	tong.dAo = dAo + n.dAo;

	return tong;
}

SoPhuc SoPhuc::TruSoPhuc(const SoPhuc& n)
{
	SoPhuc hieu;

	hieu.dThuc = dThuc - n.dThuc;
	hieu.dAo = dAo - n.dAo;

	return hieu;
}

SoPhuc SoPhuc::NhanSoPhuc(const SoPhuc& n)
{
	SoPhuc tich;

	tich.dThuc = (dThuc * n.dThuc) - (dAo * n.dAo);
	tich.dAo = (dAo * n.dThuc) + (dThuc * n.dAo);

	return tich;
}

SoPhuc SoPhuc::ChiaSoPhuc(const SoPhuc& n)
{
	SoPhuc thuong;

	double tuThuc = (dThuc * n.dThuc) + (dAo * n.dAo);
	double mauThuc = (n.dThuc * n.dThuc) + (n.dAo * n.dAo);

	double tuAo = (n.dThuc * dAo) - (dThuc * n.dAo);
	double mauAo = (n.dThuc * n.dThuc) + (n.dAo * n.dAo);

	thuong.dThuc = tuThuc / mauThuc;
	thuong.dAo = tuAo / mauAo;

	return thuong;
}

