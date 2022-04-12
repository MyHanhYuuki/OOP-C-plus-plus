#include "Candidate.h"

void Candidate::NhapThiSinh()
{
	cin.ignore();

	cout << "- Ban hay nhap vao ma so cua thi sinh: ";
	cin.getline(cMaThiSinh, 15);

	cout << "- Ban hay nhap vao ho ten cua thi sinh: ";
	cin.getline(cTenThiSinh, 20);

	cout << "- Ban hay nhap vao ngay thang nam sinh cua thi sinh!" << endl;
	cout << "- Ngay sinh:";
	cin >> iNgay;
	cout << "- Thang sinh:";
	cin >> iThang;
	cout << "- Nam sinh:";
	cin >> iNam;

	cout << "- Ban hay nhap vao diem Toan cua thi sinh: ";
	cin >> diemToan;

	cout << "- Ban hay nhap vao diem Van cua thi sinh: ";
	cin >> diemVan;

	cout << "- Ban hay nhap vao diem Anh cua thi sinh: ";
	cin >> diemAnh;
}

void Candidate::XuatThiSinh()
{
	cout << "----------THONG TIN CUA THI SINH-------- \n";
	cout << "- Ma so thi sinh: " << cMaThiSinh << endl;
	cout << "- Ho ten thi sinh: " << cTenThiSinh << endl;
	cout << "- Ngay thang nam sinh: " << iNgay << " / " << iThang << " / " << iNam << endl;
	cout << "- Diem Toan: " << diemToan << endl;
	cout << "- Diem Van: " << diemVan << endl;
	cout << "- Diem Anh: " << diemAnh << endl;
}

double Candidate::TinhTongDiem()
{
	double TongDiem;

	TongDiem = diemToan + diemAnh + diemVan;
	return TongDiem;
}

