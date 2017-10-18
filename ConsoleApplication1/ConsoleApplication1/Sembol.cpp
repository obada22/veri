#include "stdafx.h"
#include "Sembol.h"
#include <iostream>
#include <windows.h>    

Sembol::Sembol()
{
	 karekter = '\33';
	 renk = rand()%100;
}

const void Sembol::Yaz(Sembol x)
{ 
	SetColor(x.renk);
	cout << karekter;
	//return void();	
}
void Sembol::getColor()
{
    SetColor(47);
}
void Sembol::SetColor(int ForgC)
{
	WORD wColor;
	//This handle is needed to get the current background attribute

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	//csbi is used for wAttributes word

	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		//To mask out all but the background attribute, and to add the color
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}

Sembol::~Sembol()
{
}


