#pragma once
#include <windows.h>    
#include <iostream>
using namespace std;

class Sembol
{
public:
	char karekter;
	int renk;
	Sembol();
	~Sembol();
	const void Yaz(Sembol x);
	void SetColor(int ForgC);
	void getColor();
};

