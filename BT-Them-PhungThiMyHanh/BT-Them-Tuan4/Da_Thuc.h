#ifndef _DATHUC
#define _DATHUC
#include <vector>
#include <iostream>
using namespace std;
class DATHUC
{
    int n;               // Bậc của đa thức
    vector<double> heso; // 1 mảng chứa n + 1 phần tử lần lượt là hệ số của mỗi số hạng

public:
    DATHUC();
    DATHUC(int);                 // Truyền 1 tham số là bậc của đa thức
    DATHUC(int, vector<double>); // Tham số đầu tiên là bậc, tham số int * là mảng chứa hệ số của mỗi số hạng
    int Get_n();                 // Truy xuất bậc của đa thức
    vector<double> Get_heso();   // Truy xuất hệ số của các số hạng trong đa thức
    void Set_n(int);
    void Set_heso(vector<double>);
    bool Kiem_Tra();     // Kiểm tra đa thức có hợp lệ hay không
    void Chuan_Hoa();    // DATHUC có thể bị triệt tiêu, nên cần chuẩn hóa lại sau khi cộng hoặc trừ. VD: DT1 = 1 + x, DT2 = -1 - x, khi cộng tất cả sẽ bị triệt tiêu
    DATHUC Cong(DATHUC); // Trả về đa thức tổng của 2 đa thức
    DATHUC Tru(DATHUC);  // Trả về đa thức hiệu của 2 đa thức
    void Nhan(double);   // Nhân tất cả hệ số của các số hạng cho 1 số
    void Chia(double);   // Chia tất cả hệ số của các số hạng cho 1 số
    void Nhap();
    void Xuat();
    double The_So(double); // Trả về 1 số là kết quả khi thay x bằng tham số đầu vào. Thế số vào x
};
typedef DATHUC DT;
#endif