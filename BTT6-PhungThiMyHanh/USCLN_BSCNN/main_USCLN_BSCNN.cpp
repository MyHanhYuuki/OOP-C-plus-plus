#include "XuLy_USCLN_BSCNN.h"

void main()
{
	XuLy_USCLN_BSCNN us_bs;
	int chon;

	do
	{
		system("cls");
		cout << "-----------CHUONG TRINH TIM USCLN VA BSCNN CUA 2 SO NGUYEN-------------\n";
		cout << "0. Thoat khoi chuong trinh\n";
		cout << "1. Hien thi gia tri a, b mac dinh\n";
		cout << "2. Doc va ghi du lieu a\n";
		cout << "3. Doc va ghi du lieu b\n";
		cout << "4. Nhap gia tri a, b\n";
		cout << "5. Tim USCLN\n";
		cout << "6. Tim BSCNN\n";
		cout << "7. Xuat thong tin\n";
		cout << "------------------------------------------------------------------------\n";
		cout << "Hay nhap lua chon cua ban: ";
		cin >> chon;

		switch (chon)
		{
		case 0:
			cout << "\nCam on ban su dung chuong trinh!\n";
			break;
		case 1:
			cout << "Gia tri a, b mac dinh la: " << us_bs.GetA() << " , " << us_bs.GetB() << endl;
			break;
		case 2:
			int aa;
			cout << "Gia tri a hien hanh la: " << us_bs.GetA() << endl;
			cout << "Nhap gia tri a moi:";
			cin >> aa;
			us_bs.SetA(aa);
			cout << "Gia tri a vua thiet lap lai la: " << us_bs.GetA() << endl;
			break;
		case 3:
			int bb;
			cout << "Gia tri b hien hanh la: " << us_bs.GetB() << endl;
			cout << "Nhap gia tri b moi:";
			cin >> bb;
			us_bs.SetB(bb);
			cout << "Gia tri b vua thiet lap lai la: " << us_bs.GetB() << endl;
			break;
		case 4:
			us_bs.Nhap();
			cout << "Gia tri a, b vua nhap la: " << us_bs.GetA() << " , " << us_bs.GetB() << endl;
			break;
		case 5:
			cout << "USCLN cua " << us_bs.GetA() << " va " << us_bs.GetB() << " la: " << us_bs.Tim_USCLN() << endl;
			break;
		case 6:
			cout << "BSCNN cua " << us_bs.GetA() << " va " << us_bs.GetB() << " la: " << us_bs.Tim_BSCNN() << endl;
			break;
		case 7:
			us_bs.Xuat();
			break;
		default:
			cout << "Ban da chon sai. Moi ban chon lai!";
			break;
		}
		system("pause");
	} while (chon != 0);
}