#pragma once
#ifndef _XuLy_USCLN_BSCNN
#define _XuLy_USCLN_BSCNN
#include <iostream>

using namespace std;

class XuLy_USCLN_BSCNN
{
private: 
	int a, b;
public:
	XuLy_USCLN_BSCNN(int = 0, int = 0);
	int GetA();
	void SetA(int);
	int GetB();
	void SetB(int);
	void Nhap();
	int Tim_USCLN();
	int Tim_BSCNN();
	void Xuat();
};

#endif