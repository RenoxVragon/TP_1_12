#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <windows.h>
#include "keeper.h"
#include "father.h"
#include "mother.h"
#include "child.h"
using namespace std;

Keeper<Father> keeper_father;
Keeper<Mother> keeper_mother;
Keeper<Child> keeper_child;

int process_choice(int min_range, int max_range)
{
	while (1)
	{
		int choice;
		cin >> choice;
		if (cin.fail() || choice < min_range || choice > max_range)
		{
			cin.clear();
			cout << "Некорректный ввод. Попробуйте еще раз: " << endl;
		}
		else
		{
			return choice;
		}
		cin.ignore(32767, '\n');
	}
}

void print_main_menu()
{
	cout << "Главное меню работы с классом Keeper, базовым классом члена семьи Base и его наследников Mother, Father и Child." << endl;
	cout << "Выберите действие: " << endl;
	cout << "1. Добавить объект класса." << endl;
	cout << "2. Удалить объект класса." << endl;
	cout << "3. Изменить объект класса." << endl;
	cout << "4. Показать все объекты класса." << endl;
	cout << "0. Завершить работу." << endl;
}

void print_add_menu()
{
	cout << "Меню добавления объекта класса. Выберите класс: " << endl;
	cout << "1. Father." << endl;
	cout << "2. Mother." << endl;
	cout << "3. Child." << endl;
	cout << "0. Вернуться." << endl;
}

void print_delete_menu()
{
	cout << "Меню удаления объекта класса. Выберите класс: " << endl;
	cout << "1. Father." << endl;
	cout << "2. Mother." << endl;
	cout << "3. Child." << endl;
	cout << "0. Вернуться." << endl;
}

void print_change_menu()
{
	cout << "Меню изменения объекта класса. Выберите класс: " << endl;
	cout << "1. Father." << endl;
	cout << "2. Mother." << endl;
	cout << "3. Child." << endl;
	cout << "0. Вернуться." << endl;
}

void print_show_menu()
{
	cout << "Меню показа всех объектов класса. Выберите класс: " << endl;
	cout << "1. Father." << endl;
	cout << "2. Mother." << endl;
	cout << "3. Child." << endl;
	cout << "0. Вернуться." << endl;
}

Father f;
Mother m;
Child c;

void menu_selection(int number)
{
	system("cls");
	int next_choice;
	int index;
	switch(number)
	{
	case 1:
		print_add_menu();
		next_choice = process_choice(0, 3);
		switch (next_choice)
		{
		case 1:
			cin.ignore();
			f.set_info();
			keeper_father.push_back(f);
			break;
		case 2:
			cin.ignore();
			m.set_info();
			keeper_mother.push_back(m);
			break;
		case 3: 
			cin.ignore();
			c.set_info();
			keeper_child.push_back(c);
			break;
		case 0:
			break;
		}
		break;
	case 2:
		//system("cls");
		print_delete_menu();
		next_choice = process_choice(0, 3);
		switch (next_choice)
		{
		case 1:
			cin.ignore();
			if (keeper_father.get_size() > 0)
			{
				for (int i = 0; i < keeper_father.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_father[i].print_info();
					cout << "\n" << endl;
				}
				cout << "Выберите индекс объекта, который хотите удалить: " << endl;
				index = process_choice(0, keeper_father.get_size() - 1);
				keeper_father.del(index);
			}
			else
				cout << "Нет объектов для удаления в контейнере." << endl;
			break;
		case 2:
			cin.ignore();
			if (keeper_mother.get_size() > 0)
			{
				for (int i = 0; i < keeper_mother.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_mother[i].print_info();
					cout << "\n" << endl;
				}
				cout << "Выберите индекс объекта, который хотите удалить: " << endl;
				index = process_choice(0, keeper_mother.get_size() - 1);
				keeper_mother.del(index);
			}
			else
				cout << "Нет объектов для удаления в контейнере." << endl;
			break;
		case 3:
			cin.ignore();
			if (keeper_child.get_size() > 0)
			{
				for (int i = 0; i < keeper_child.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_child[i].print_info();
					cout << "\n" << endl;
				}
				cout << "Выберите индекс объекта, который хотите удалить: " << endl;
				index = process_choice(0, keeper_child.get_size() - 1);
				keeper_child.del(index);
			}
			else
				cout << "Нет объектов для удаления в контейнере." << endl;
			break;
		case 0:
			break;
		}
		break;
	case 3:
		//system("cls");
		print_change_menu();
		next_choice = process_choice(0, 3);
		break;
	case 4:
		//system("cls");
		print_show_menu();
		next_choice = process_choice(0, 3);
		switch (next_choice)
		{
		case 1:
			if (keeper_father.get_size() > 0)
			{
				for (int i = 0; i < keeper_father.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_father[i].print_info();
					cout << "\n" << endl;
				}
			}
			else
				cout << "Нет объектов в контейнере." << endl;
			break;
		case 2:
			if (keeper_mother.get_size() > 0)
			{
				for (int i = 0; i < keeper_mother.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_mother[i].print_info();
					cout << "\n" << endl;
				}
			}
			else
				cout << "Нет объектов в контейнере." << endl;
			break;
		case 3:
			if (keeper_child.get_size() > 0)
			{
				for (int i = 0; i < keeper_child.get_size(); i++)
				{
					cout << "Индекс объекта: " << i << endl;
					keeper_child[i].print_info();
					cout << "\n" << endl;
				}
			}
			else
				cout << "Нет объектов в контейнере." << endl;
			break;
		case 0:
			break;
		}
		break;
	case 0:
		exit(0);
		break;
	default:
		cout << "Выбран неверный пункт меню. Попробуйте еще раз." << endl;
		break;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	while (1)
	{
		print_main_menu();
		int choice = process_choice(0, 4);
		menu_selection(choice);
	}
}

