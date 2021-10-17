#include "father.h"

void Father::set_info()
{
	cout << "������� ��� ����: " << endl;
	string _fio, _fio_m, _fio_c, _fio_f;
	getline(cin, _fio);
	cout << "������� ���� ��������: " << endl;
	int birth[3], death[3] = { 0, 0, 0 };
	int flag = 1;
	int choice;
	cout << "������� ��� �������� (�� ����� ���� ������ 2021 � ������ 1931 ��� ������� ����������������� ����� � 90 ���):" << endl;
	while (flag)
	{
		cin >> birth[2];
		if (cin.fail() || birth[2] < 1931 || birth[2] > 2021)
		{
			cin.clear();
			cout << "������ �������� ���. ���������� ��� ���: " << endl;
		}
		else
		{
			flag = 0;
		}
		cin.ignore(32767, '\n');
	}
	flag = 1;
	cout << "������� ����� ��������:" << endl;
	while (flag)
	{
		cin >> birth[1];
		if (cin.fail() || birth[1] < 0 || birth[1] > 12)
		{
			cin.clear();
			cout << "������ �������� �����. ���������� ��� ���: " << endl;
		}
		else
		{
			flag = 0;
		}
		cin.ignore(32767, '\n');
	}
	flag = 1;
	cout << "������� ���� ��������:" << endl;
	while (flag)
	{
		cin >> birth[0];
		if (cin.fail() || birth[0] < 0 || birth[0] > 31)
		{
			cin.clear();
			cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
	cout << "������ ������� ����?\n1. ��\n2. ���" << endl;
	flag = 1;
	while (flag)
	{
		cin >> choice;
		if (cin.fail() || choice < 1 || choice > 2)
		{
			cin.clear();
			cout << "������ �������� �����. ���������� ��� ���:  " << endl;
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
		cout << "������� ��� ������ (�� ����� ���� ������ 2021 � ������ ���� �������� ��������):" << endl;
		while (flag)
		{
			cin >> death[2];
			if (cin.fail() || death[2] < birth[2] || death[2] > 2021)
			{
				cin.clear();
				cout << "������ �������� ���. ���������� ��� ���: " << endl;
			}
			else
			{
				flag = 0;
			}
			cin.ignore(32767, '\n');
		}
		flag = 1;
		cout << "������� ����� ������:" << endl;
		while (flag)
		{
			cin >> death[1];
			if (cin.fail() || death[1] < 0 || death[1] > 12)
			{
				cin.clear();
				cout << "������ �������� �����. ���������� ��� ���: " << endl;
			}
			else
			{
				flag = 0;
			}
			cin.ignore(32767, '\n');
		}
		flag = 1;
		cout << "������� ���� ��������:" << endl;
		while (flag)
		{
			cin >> death[0];
			if (cin.fail() || death[0] < 0 || death[0] > 31)
			{
				cin.clear();
				cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
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
	cout << "������� ����, ���� ����, ����� ������� Enter: " << endl;
	getline(cin, _fio_f);
	cout << "������� ����, ���� ����, ����� ������� Enter: " << endl;
	getline(cin, _fio_m);
	cout << "������� �������, ���� ����, ����� ������� Enter: " << endl;
	getline(cin, _fio_c);
	this->set_birth_date(birth[0], birth[1], birth[2]);
	this->set_death_date(death[0], death[1], death[2]);
	this->set_fio(_fio);
	this->set_family(_fio_m, _fio_f, _fio_c);
	this->set_age();
}

void Father::print_info()
{
	int *date = this->get_birth_date();
	cout << "��� ����: " << this->get_fio() << endl;
	cout << "���� ��������: " << date[0] << "." << date[1] << "." << date[2] << endl;
	cout << "�������: " << this->get_age() << endl;
	string *data = this->get_family();
	cout << "������ � �����: " << endl;
	cout << "����: " << data[0] << endl;
	cout << "����: " << data[1] << endl;
	cout << "�������: " << data[2] << endl;
	int *d_date = this->get_death_date();
	cout << "���� ������: " << d_date[0] << "." << d_date[1] << "." << d_date[2] << endl;
}