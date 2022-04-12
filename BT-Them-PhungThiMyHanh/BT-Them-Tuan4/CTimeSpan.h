#ifndef _CTIMESPAN
#define _CTIMESPAN
#include <iostream>

class CTimeSpan
{
    int h; // Giờ
    int m; // Phút
    int s; // Giây

public:
    CTimeSpan();
    CTimeSpan(int);
    CTimeSpan(int, int);
    CTimeSpan(int, int, int);
    int Get_h();
    int Get_m();
    int Get_s();
    CTimeSpan Get_CTIMESPAN();
    void Set_h(int);
    void Set_m(int);
    void Set_s(int);
    void Set(int, int, int);
    void Nhap();
    void Xuat();
    CTimeSpan Cong(CTimeSpan);
    CTimeSpan Tru(CTimeSpan);
    void Chuan_Hoa();          // Chuẩn hóa khoảng thời gian, giả sử 1 khoảng thời gian 1h 80m 90s sẽ cần chuẩn hóa thành 2h 21m 30s
    bool Bang_Nhau(CTimeSpan); // Trả về 1 nếu 2 CTP này bằng nhau, ngược lại trả về 0
    bool Khac_Nhau(CTimeSpan); // Trả về 1 nếu 2 CTP này khác nhau, ngược lại trả về 0
    bool Lon_Hon(CTimeSpan);
    bool Nho_Hon(CTimeSpan);
    bool Lon_Hon_Hoac_Bang(CTimeSpan);
    bool Nho_Hon_Hoac_Bang(CTimeSpan);
};

typedef CTimeSpan CTP;

#endif