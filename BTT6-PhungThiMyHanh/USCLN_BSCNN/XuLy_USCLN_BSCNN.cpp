#include "XuLy_USCLN_BSCNN.h"

XuLy_USCLN_BSCNN::XuLy_USCLN_BSCNN(int a, int b)
{
	this->a = a;
	this->b = b;
}

int XuLy_USCLN_BSCNN::GetA()
{
	return a;
}

void XuLy_USCLN_BSCNN::SetA(int a)
{
	this->a = a;
}

int XuLy_USCLN_BSCNN::GetB()
{
	return b;
}

void XuLy_USCLN_BSCNN::SetB(int b)
{
	this->b = b;
}

void XuLy_USCLN_BSCNN::Nhap()
{
	cout << "Nhap so nguyen a:";
	cin >> a;
	cout << "Nhap so nguyen b:";
	cin >> b;
}

int XuLy_USCLN_BSCNN::Tim_USCLN()
{
	int uscln;
	int aa = abs(a); // absolute |a|
	int bb = abs(b); // absolute |b|
	if (aa == 0 && bb == 0)
		uscln = 1;
	else if (aa == 0 || bb == 0)
		uscln = aa + bb;
	else
	{
		while (aa != bb)
		{
			if (aa > bb)
				aa = aa - bb;
			else bb = bb - aa;
		} uscln = aa; // Hoac uscln = bb
	}
	return uscln;
}

int XuLy_USCLN_BSCNN::Tim_BSCNN()
{
	return abs(a * b) / Tim_USCLN();
}

void XuLy_USCLN_BSCNN::Xuat()
{
	cout << "USCLN (" << a << ", " << b << ") =" << Tim_USCLN() << "va BSCNN (" << a << ", " << b << ") = " << Tim_BSCNN() << endl;
}

