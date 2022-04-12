#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

#define MAX 10

void ChayChuongTrinh();
void ThongBaoKetQua(int kq, int soDe);
int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int soDe);

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char kt;
	int kq, k, soDe;
	do
	{
		system("CLS");
		soDe = SinhSoNgauNhien();
		k = ChonMucDoan();
		kq = XuLyTroChoi(k, soDe);
		system("CLS");
		cout << "\nTRO CHOI DOAN SO VOI SO LAN DOAN : k = " << k << " :\n";
		ThongBaoKetQua(kq, soDe);
		_getch();
		system("CLS");
		cout << "\nBan muon choi tiep khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}
/*int ChonMucDoan()
{
	int kho,de,TB;
	do
	{
		cout << "Chon so lan doan toi da: Kho(1-3) :";
		cin >> kho;
	}
	return k;
}*/

int ChonMucDoan()
{
	int k;
	do
	{
		cout << "Ban se doan so trong khoang tu 0 den 10! \n";
		cout << "Ban hay chon muc do kho khi doan: \n";
		cout << "Kho(1 - 3), Trung Binh(4 - 7), De(> 7) \n";
		cin >> k;
		if (k >= 1 && k <= 3)
		{
			cout << "Ban duoc doan " << k << " lan!";
		}
		else if (k >= 3 && k <= 7)
		{
			cout << "Ban duoc doan " << k << " lan!";
		}
		else if (k > 7)
		{
			cout << "Ban duoc doan " << k << " lan!";
		}
	} while (k == 0);
	return k;
}

int SinhSoNgauNhien()
{
	int soDe;
	srand((unsigned int)time(0));
	soDe = rand() % MAX;
	return soDe;
}

int XuLyTroChoi(int k, int soDe)
{
	int i,
		soDoan,
		kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ", so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else
			if (soDoan > soDe)
				cout << "\nSo doan cua ban lon hon dap an!";
			else
				cout << "\nSo doan cua ban nho hon dap an!";
	}
	return kq;
}

void ThongBaoKetQua(int kq, int soDe)
{
	system("CLS");
	cout << "\n------------KET QUA CUA TRO CHOI----------------- ";
	if (kq)
		cout << "\nChuc mung ban da thang!";
	else
		cout << "\nBan da thua!";
	cout << "\nDe cho so : " << soDe;
}