#include "TestCandidate.h"

void TestCandidate::NhapDanhSach()
{
	cout << "--------- NHAP THONG TIN CAC THI SINH ---------" << endl;
	cout << "\nNhap so luong thi sinh: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":" << endl;
		DanhSachThiSinh[i].NhapThiSinh();
	}
	cout << endl;
}

void TestCandidate::XuatDanhSach()
{
	cout << "--------- DANH SACH CAC THI SINH ---------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "\nThi sinh thu " << i + 1 << ":" << endl;
		DanhSachThiSinh[i].XuatThiSinh();
	}
}

void TestCandidate::XuatThiSinhDiemTren15()
{
	cout << endl;
	cout << "--------- DANH SACH CAC THI SINH CO TONG DIEM LON HON 15 ---------" << endl;

	for (int i = 0; i < n; i++)
	{
		if (DanhSachThiSinh[i].TinhTongDiem() > 15)
		{
			cout << "\nThi sinh thu " << i + 1 << ":" << endl;
			DanhSachThiSinh[i].XuatThiSinh();
		}
	}
}

