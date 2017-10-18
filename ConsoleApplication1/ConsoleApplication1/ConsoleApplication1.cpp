// ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "Sembol.h"
#include <iostream>
using namespace std;
int main()
{

	int boyut;
	cout << "boyut";
	cin >> boyut;

	/*Sembol *dizi = new Sembol[boyut];

	for (int i = 0; i < boyut; i++)
	{
		dizi->SetColor(i);
		dizi->Yaz(dizi[i]);
		cout << "  [" << i + 1 << "]" << "->" << &dizi[i]<<endl;
		dizi->getColor();

	}
	*/

	int *dizi = new int[boyut];
	for (int i = 0; i < boyut; i++)
	{
		dizi[i] = i;
		cout << &dizi[i] <<  "->" << dizi[i] << endl;
	}

		
	////tamam////
	Sembol ss;

	cout << "ters" << endl;
	int q;
	int *start = &dizi[0];
	int *end = &dizi[boyut];
	int *p;
	for (int i = 0; i < boyut ; i++)
	{
		
		p = &dizi[(boyut-1-i)];
		*p= dizi[(boyut - 1 - i)];
		ss.SetColor(i+1);
		cout << p << "->" << *p << endl;
		
		/*dizi[i] = dizi[(boyut - i - 1)];
		dizi[(boyut - i - 1)] = q;
*/
	}
	/*for (int i = 0; i < boyut / 2; i++)
	{

		q = dizi[i];

		dizi[i] = dizi[(boyut - i - 1)];
		dizi[(boyut - i - 1)] = q;

	}*/
	/*else
	{
		for (int i = 0; i < (boyut / 2)+1; i++)
		{

			q = dizi[i];
			dizi[i] = dizi[(boyut - i - 1)];
			dizi[(boyut - i - 1)] = q;

		}

	}*/
	cout << "----------" << endl;
	for (int i = 0; i < boyut; i++)
	{
		ss.SetColor((boyut - i));
		cout << &dizi[i]  << "->" << dizi[i] << endl;
	}ss.SetColor(15);

	system("pause");
	return 0;
}