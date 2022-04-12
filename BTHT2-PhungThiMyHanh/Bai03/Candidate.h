#pragma once
#include <iostream>
using namespace std;

class Candidate
{
private:
	char cMaThiSinh[10], cTenThiSinh[20];
	int iNgay, iThang, iNam;
	double diemToan, diemVan, diemAnh;

public:
	void NhapThiSinh();
	void XuatThiSinh();
	double TinhTongDiem();
};