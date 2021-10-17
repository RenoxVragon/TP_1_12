#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <windows.h>
#include "keeper.h"
#include "father.h"
using namespace std;

Keeper<int> keeper1;
Keeper<int> keeper2(3);

Father f1;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	keeper2.push_back(1);
	keeper2.push_back(2);
	keeper2.push_back(3);
	keeper1 = keeper2;
	for (int i = 0; i < keeper2.get_size(); i++)
		keeper1.del(i);
	for (int i = 0; i < keeper2.get_size(); i++)
	{
		cout << keeper2[i] << endl;
	}
	cout << "Проверка работы с классом Отец" << endl;
	f1.set_info();
	f1.print_info();
}

