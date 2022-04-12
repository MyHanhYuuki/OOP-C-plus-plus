#pragma once
#include "Candidate.h"

class TestCandidate
{
private:
	int n;
	Candidate* DanhSachThiSinh = new Candidate[100];

public:
	void NhapDanhSach();
	void XuatDanhSach();
	void XuatThiSinhDiemTren15();
};
