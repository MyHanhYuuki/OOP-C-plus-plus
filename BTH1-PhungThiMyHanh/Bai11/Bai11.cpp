#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

        void Main()
        {
            double diemchuan, diemthi, diemdt, diemkv;
            int madt;
            char makv;

            cout << " Ban hay nhap vao diem chuan: \n ";
            cin >> diemchuan;
            cout << " Ban hay nhap vao diem 3 mon thi cua thi sinh: \n ";
            cin >> diemthi;

            //Tinh diem khu vuc
            cout << " Ban hay chon ma khu vuc cua thi sinh (A, B or C): \n ";
            cin >> makv;
            diemkv = 0;

            switch (makv)
            {
            case 'A':
                diemkv = 1.5;
                cout << " Diem khu vuc A la: \n";
                cout << diemkv;
                break;
            case 'B':
                diemkv = 1;
                cout << " Diem khu vuc B la: \n";
                cout << diemkv;
                break;
            case 'C':
                diemkv = 0.5;
                cout << " Diem khu vuc C la: \n";
                cout << diemkv;
                break;
            };

            //Tinh diem doi tuong
            cout << " Ban hay chon ma doi tuong cua thi sinh (1, 2 or 3): \n ";
            cin >> madt;
            diemdt = 0;
            switch (madt)
            {
            case 1:
                diemdt = 1.5;
                cout << " Diem doi tuong 1 la: \n";
                cout << diemdt;
                break;
            case 2:
                diemdt = 1;
                cout << " Diem doi tuong 2 la: \n";
                cout << diemdt;
                break;
            case 3:
                diemdt = 0.5;
                cout << " Diem doi tuong 3 la: \n";
                cout << diemdt;
                break;
            };

            //Tinh tong diem cua thi sinh va xet dieu kien.
           double tongdiem = diemthi + diemkv + diemdt;
            cout << " Tong diem cua thi sinh la: ";
            cout << tongdiem;

            if (tongdiem >= diemchuan)
                cout << "\n Chuc mung ban da trung tuyen !\n";
            else
                cout << "\n Ban da khong trung tuyen ! \n";
        }