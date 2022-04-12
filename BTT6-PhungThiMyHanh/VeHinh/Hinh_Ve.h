#include <iostream>
using namespace std;
#ifndef _HINHVE
#define _HINHVE

class HINHVE
{
    double h, w; //Chieu dai va chieu rong

public:
    HINHVE();
    HINHVE(int);
    HINHVE(int, int);
    void Nhap();
    void Ve_HCN_Dac();
    void Ve_HCN_Rong();
    void Ve_TGVCan_Dac();
    void Ve_TGVCan_Rong();
};

typedef HINHVE HV;

#endif