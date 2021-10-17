#include "child.h"

void Child::set_info()
{
	cout << "Введите ФИО ребенка: " << endl;
	string _fio, _fio_m, _fio_c, _fio_f;
	getline(cin, _fio);
	cout << "Введите дату рождения: " << endl;
	int birth[3], death[3] = { 0, 0, 0 };
	int flag = 1;
	int choice;
	cout << "Введите год рождения (не может быть больше 2021 и меньше 1931 при средней продолжительности жизни в 90 лет):" << endl;
	while (flag)
	{
		cin >> birth[2];
		if (cin.fail() || birth[2] < 1931 || birth[2] > 2021)
		{
			cin.clear();
			cout << "Введен неверный год. Попробуйте еще раз: " << endl;
		}
		else
		{
			flag = 0;
		}
		cin.ignore(32767, '\n');
	}
	flag = 1;
	cout << "Введите месяц рождения:" << endl;
	while (flag)
	{
		cin >> birth[1];
		if (cin.fail() || birth[1] < 0 || birth[1] > 12)
		{
			cin.clear();
			cout << "Введен неверный месяц. Попробуйте еще раз: " << endl;
		}
		else
		{
			flag = 0;
		}
		cin.ignore(32767, '\n');
	}
	flag = 1;
	cout << "Введите день рождения:" << endl;
	while (flag)
	{
		cin >> birth[0];
		if (cin.fail() || birth[0] < 0 || birth[0] > 31)
		{
			cin.clear();
			cout << "Введен неверный день. Попробуйте еще раз: " << endl;
		}
		else
		{
			switch (birth[1])
			{
			case 1:
				flag = 0;
				break;
			case 2:
				if (birth[0] > 29)
				{
					cout << "Введен неверный день. Попробуйте еще раз: " << endl;
					break;
				}
				flag = 0;
				break;
			case 3:
				flag = 0;
				break;
			case 4:
				if (birth[0] > 30)
				{
					cout << "Введен неверный день. Попробуйте еще раз: " << endl;
					break;
				}
				flag = 0;
				break;
			case 5:
				flag = 0;
				break;
			case 6:
				if (birth[0] > 30)
				{
					cout << "Введен неверный день. Попробуйте еще раз: " << endl;
					break;
				}
				flag = 0;
				break;
			case 7:
				flag = 0;
				break;
			case 8:
				flag = 0;
				break;
			case 9:
				if (birth[0] > 30)
				{
					cout << "Введен неверный день. Попробуйте еще раз: " << endl;
					break;
				}
				flag = 0;
				break;
			case 10:
				flag = 0;
				break;
			case 11:
				if (birth[0] > 30)
				{
					cout << "Введен неверный день. Попробуйте еще раз: " << endl;
					break;
				}
				flag = 0;
				break;
			case 12:
				flag = 0;
				break;
			}
		}
		cin.ignore(32767, '\n');
	}
	cout << "Данный человек умер?\n1. Да\n2. Нет" << endl;
	flag = 1;
	while (flag)
	{
		cin >> choice;
		if (cin.fail() || choice < 1 || choice > 2)
		{
			cin.clear();
			cout << "Выбран неверный пункт. Попробуйте еще раз:  " << endl;
		}
		else
		{
			flag = 0;
		}
		cin.ignore(32767, '\n');
	}
	if (choice == 1)
	{
		flag = 1;
		cout << "Введите год смерти (не может быть больше 2021 и меньше года рождения человека):" << endl;
		while (flag)
		{
			cin >> death[2];
			if (cin.fail() || death[2] < birth[2] || death[2] > 2021)
			{
				cin.clear();
				cout << "Введен неверный год. Попробуйте еще раз: " << endl;
			}
			else
			{
				flag = 0;
			}
			cin.ignore(32767, '\n');
		}
		flag = 1;
		cout << "Введите месяц смерти:" << endl;
		while (flag)
		{
			cin >> death[1];
			if (cin.fail() || death[1] < 0 || death[1] > 12)
			{
				cin.clear();
				cout << "Введен неверный месяц. Попробуйте еще раз: " << endl;
			}
			else
			{
				flag = 0;
			}
			cin.ignore(32767, '\n');
		}
		flag = 1;
		cout << "Введите день рождения:" << endl;
		while (flag)
		{
			cin >> death[0];
			if (cin.fail() || death[0] < 0 || death[0] > 31)
			{
				cin.clear();
				cout << "Введен неверный день. Попробуйте еще раз: " << endl;
			}
			else
			{
				switch (death[1])
				{
				case 1:
					flag = 0;
					break;
				case 2:
					if (death[0] > 29)
					{
						cout << "Введен неверный день. Попробуйте еще раз: " << endl;
						break;
					}
					flag = 0;
					break;
				case 3:
					flag = 0;
					break;
				case 4:
					if (death[0] > 30)
					{
						cout << "Введен неверный день. Попробуйте еще раз: " << endl;
						break;
					}
					flag = 0;
					break;
				case 5:
					flag = 0;
					break;
				case 6:
					if (death[0] > 30)
					{
						cout << "Введен неверный день. Попробуйте еще раз: " << endl;
						break;
					}
					flag = 0;
					break;
				case 7:
					flag = 0;
					break;
				case 8:
					flag = 0;
					break;
				case 9:
					if (death[0] > 30)
					{
						cout << "Введен неверный день. Попробуйте еще раз: " << endl;
						break;
					}
					flag = 0;
					break;
				case 10:
					flag = 0;
					break;
				case 11:
					if (death[0] > 30)
					{
						cout << "Введен неверный день. Попробуйте еще раз: " << endl;
						break;
					}
					flag = 0;
					break;
				case 12:
					flag = 0;
					break;
				}
			}
			cin.ignore(32767, '\n');
		}
	}
	cout << "Введите отца, если есть, иначе нажмите Enter: " << endl;
	getline(cin, _fio_f);
	cout << "Введите мать, если есть, иначе нажмите Enter: " << endl;
	getline(cin, _fio_m);
	cout << "Введите супруг(а/у), если есть, иначе нажмите Enter: " << endl;
	getline(cin, _fio_c);
	this->set_birth_date(birth[0], birth[1], birth[2]);
	this->set_death_date(death[0], death[1], death[2]);
	this->set_fio(_fio);
	this->set_family(_fio_m, _fio_f, _fio_c);
	this->set_age();
}

void Child::print_info()
{
	int* date = this->get_birth_date();
	cout << "ФИО ребенка: " << this->get_fio() << endl;
	cout << "Дата рождения: " << date[0] << "." << date[1] << "." << date[2] << endl;
	cout << "Возраст: " << this->get_age() << endl;
	string* data = this->get_family();
	cout << "Данные о семье: " << endl;
	cout << "Мать: " << data[0] << endl;
	cout << "Отец: " << data[1] << endl;
	cout << "Супруг(а): " << data[2] << endl;
	int* d_date = this->get_death_date();
	cout << "Дата смерти: " << d_date[0] << "." << d_date[1] << "." << d_date[2] << endl;
}