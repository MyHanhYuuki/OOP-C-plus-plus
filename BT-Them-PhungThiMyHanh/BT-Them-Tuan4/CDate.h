#ifndef _CDate
#define _CDate
#include <iostream>
#include <cmath>
using namespace std;

class DATE
{
    int ng, th, n; // Ngày tháng và năm
public:
    DATE();
    DATE(int);
    DATE(int, int);
    DATE(int, int, int);
    void Nhap();
    void Xuat();
    int Get_ng();
    int Get_th();
    int Get_n();
    void Set_ng(int);
    void Set_th(int);
    void Set_n(int);
    void Set_NgThN(int, int, int);
    void Them_1ng();      // Thêm 1 ngày
    void Bot_1ng();       // Bớt 1 ngày
    DATE Cong(int);       // Cộng thêm 1 số ngày và trả về DATE mới
    DATE Tru(int);        // Bớt đi 1 số ngày và trả về DATE mới
    int KhoangCach(DATE); // Trả về khoảng cách giữa 2 DATE, số ngày chênh lệch giữa 2 DATE
    bool KiemTraHopLe();
    bool KiemTraTrung(DATE); // Kiểm tra 2 ngày có trùng nhau hay không
};

#endif