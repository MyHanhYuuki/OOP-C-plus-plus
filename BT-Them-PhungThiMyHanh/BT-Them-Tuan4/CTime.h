#ifndef _CTIME
#define _CTIME
#include "CTimeSpan.h"
#include <iostream>
using namespace std;
class CTIME
{
    int h; // Giờ
    int m; // Phút
    int s; // Giây
public:
    CTIME();
    CTIME(int);
    CTIME(int, int);
    CTIME(int, int, int);
    bool Kiem_Tra_Chuan(); // Kiểm tra một thời điểm có chuẩn không
    void Nhap();           // Nhập vào 1 thời điểm gồm 3 thành phần giờ, phút, giây
    void Xuat();           // Xuất 1 thời điểm
    CTIME Chuan_Hoa();     // Chuẩn hóa, dùng để chuẩn hóa kết quả sau khi cộng, trừ 2 thời điểm
    void Cong(int);        // Cộng vào thời điểm đang xét 1 số nguyên giây
    void Tru(int);         // Trừ vào thời điểm đang xét 1 số nguyên giây
    CTimeSpan Tru(CTIME);  // Trừ 2 thời điểm để được 1 khoảng thời gian
    void Them_1s();        // Thêm 1 giây
    void Bot_1s();         // Bớt 1 giây
};

#endif