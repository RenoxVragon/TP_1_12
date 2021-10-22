#include "father.h"

Father::Father() :Base()
{
	cout << "Constructor default Father" << endl;
	is_dead = false;
}

Father::Father(const Father& father_copy):Base(father_copy)
{
	cout << "Constructor copy Father" << endl;
	this->is_dead = father_copy.is_dead;
}

Father::~Father()
{
	cout << "Deconstructor default Father" << endl;
	is_dead = false;
}

void Father::set_info()
{
	cout << "������� ��� ����: " << endl;
	string _fio, _fio_m, _fio_c, _fio_f;
	getline(cin, _fio);
	string str;
	cout << "������� ���� ��������: " << endl;
	int birth[3], death[3] = { 0, 0, 0 };
	int flag = 1;
	int choice;
	cout << "������� ��� �������� (�� ����� ���� ������ 2021 � ������ 1931 ��� ������� ����������������� ����� � 90 ���):" << endl;
	while (flag)
	{
		cin >> str;
		if (str.find_first_not_of("0123456789", 0) == string::npos)
		{
			birth[2] = stoi(str);
			if (birth[2] < 1931 || birth[2] > 2021)
				cout << "������ �������� ���. ���������� ��� ���: " << endl;
			else
				flag = 0;
		}
		else
			cout << "������������ ����. ���������� ��� ���: " << endl;
	}
	flag = 1;
	cout << "������� ����� ��������:" << endl;
	while (flag)
	{
		cin >> str;
		if (str.find_first_not_of("0123456789", 0) == string::npos)
		{
			birth[1] = stoi(str);
			if (birth[1] < 1 || birth[1] > 12)
				cout << "������ �������� �����. ���������� ��� ���: " << endl;
			else
				flag = 0;
		}
		else
			cout << "������������ ����. ���������� ��� ���: " << endl;
	}
	flag = 1;
	cout << "������� ���� ��������:" << endl;
	while (flag)
	{
		cin >> str;
		if (str.find_first_not_of("0123456789", 0) == string::npos)
		{
			birth[0] = stoi(str);
			if (birth[0] < 0 || birth[0] > 31)
				cout << "������ �������� ����. ���������� ��� ���: " << endl;
			else
				switch (birth[1])
				{
				case 1:
					flag = 0;
					break;
				case 2:
					if (birth[0] > 29 || ((birth[0] == 29) && (birth[2] % 4 != 0)))
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
		else
			cout << "������������ ����. ���������� ��� ���: " << endl;
	}
	cout << "������ ������� ����?\n1. ��\n2. ���" << endl;
	flag = 1;
	while (flag)
	{
		cin >> str;
		if (str.find_first_not_of("0123456789", 0) == string::npos)
		{
			choice = stoi(str);
			if (choice < 1 || choice > 2)
				cout << "������ �������� �����. ���������� ��� ���:  " << endl;
			else
			{
				if (choice == 1)
					is_dead = true;
				flag = 0;
			}
		}
		else
			cout << "������������ ����. ���������� ��� ���: " << endl;
	}
	if (is_dead == true)
	{
		flag = 1;
		cout << "������� ��� ������ (�� ����� ���� ������ 2021 � ������ ���� �������� ��������):" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[2] = stoi(str);
				if (death[2] < birth[2] || death[2] > 2021)
					cout << "������ �������� ���. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ����� ������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[1] = stoi(str);
				if (death[1] < 1 || death[1] > 12)
					cout << "������ �������� �����. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ���� ������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[0] = stoi(str);
				if (death[0] < 0 || death[0] > 31)
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
				else
					switch (death[1])
					{
					case 1:
						flag = 0;
						break;
					case 2:
						if (death[0] > 29 || ((death[0] == 29) && (death[2] % 4 != 0)))
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
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
	}
	cin.ignore(32767, '\n');
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

void Father::change_info()
{
	cout << "�� ����������� �������� ������ �������. ��������, ��� �� ������ ��������: " << endl;
	cout << "1. ��� ����\n2. ���� ��������\n3. ��� ������\n4. ��� ����\n5. ��� �������\n6. ���� ������.\n0. ��������� �����." << endl;
	string _fio, _fio_m, _fio_c, _fio_f;
	string* data = this->get_family();
	string str;
	int* date = this->get_birth_date();
	int birth[3], death[3] = { 0, 0, 0 };
	int flag = 1;
	int choice;
	while (flag)
	{
		cin >> str;
		if (str.find_first_not_of("0123456789", 0) == string::npos)
		{
			choice = stoi(str);
			if (choice < 0 || choice > 6)
				cout << "������������ ����. ���������� ��� ���: " << endl;
			else
				flag = 0;
		}
		else
			cout << "������������ ����. ���������� ��� ���: " << endl;
	}
	cin.ignore(32767, '\n');
	switch (choice)
	{
	case 1:
		cout << "������� ��� ����: " << endl;
		getline(cin, _fio);
		this->set_fio(_fio);
		break;
	case 2:
		flag = 1;
		cout << "������� ��� �������� (�� ����� ���� ������ 2021 � ������ 1931 ��� ������� ����������������� ����� � 90 ���):" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				birth[2] = stoi(str);
				if (birth[2] < 1931 || birth[2] > 2021)
					cout << "������ �������� ���. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ����� ��������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				birth[1] = stoi(str);
				if (birth[1] < 1 || birth[1] > 12)
					cout << "������ �������� �����. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ���� ��������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				birth[0] = stoi(str);
				if (birth[0] < 0 || birth[0] > 31)
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
				else
					switch (birth[1])
					{
					case 1:
						flag = 0;
						break;
					case 2:
						if (birth[0] > 29 || ((birth[0] == 29) && (birth[2] % 4 != 0)))
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
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		this->set_birth_date(birth[0], birth[1], birth[2]);
		this->set_age();
		break;
	case 3:
		cout << "������� ��� ������: " << endl;
		getline(cin, _fio_m);
		this->set_family(_fio_m, data[1], data[2]);
		break;
	case 4:
		cout << "������� ��� ����: " << endl;
		getline(cin, _fio_f);
		this->set_family(data[0], _fio_f, data[2]);
		break;
	case 5:
		cout << "������� ��� �������: " << endl;
		getline(cin, _fio_c);
		this->set_family(data[0], data[1], _fio_c);
		break;
	case 6:
		if (is_dead == false)
		{
			is_dead = true;
			flag = 1;
			cout << "������� ��� ������ (�� ����� ���� ������ 2021 � ������ ���� �������� ��������):" << endl;
			while (flag)
			{
				cin >> str;
				if (str.find_first_not_of("0123456789", 0) == string::npos)
				{
					death[2] = stoi(str);
					if (death[2] < birth[2] || death[2] > 2021)
						cout << "������ �������� ���. ���������� ��� ���: " << endl;
					else
						flag = 0;
				}
				else
					cout << "������������ ����. ���������� ��� ���: " << endl;
			}
			flag = 1;
			cout << "������� ����� ������:" << endl;
			while (flag)
			{
				cin >> str;
				if (str.find_first_not_of("0123456789", 0) == string::npos)
				{
					death[1] = stoi(str);
					if (death[1] < 1 || death[1] > 12)
						cout << "������ �������� �����. ���������� ��� ���: " << endl;
					else
						flag = 0;
				}
				else
					cout << "������������ ����. ���������� ��� ���: " << endl;
			}
			flag = 1;
			cout << "������� ���� ������:" << endl;
			while (flag)
			{
				cin >> str;
				if (str.find_first_not_of("0123456789", 0) == string::npos)
				{
					death[0] = stoi(str);
					if (death[0] < 0 || death[0] > 31)
						cout << "������ �������� ����. ���������� ��� ���: " << endl;
					else
						switch (death[1])
						{
						case 1:
							flag = 0;
							break;
						case 2:
							if (death[0] > 29 || ((death[0] == 29) && (death[2] % 4 != 0)))
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
				else
					cout << "������������ ����. ���������� ��� ���: " << endl;
			}
		}
		else
		{
		flag = 1;
		cout << "������� ��� ������ (�� ����� ���� ������ 2021 � ������ ���� �������� ��������):" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[2] = stoi(str);
				if (death[2] < birth[2] || death[2] > 2021)
					cout << "������ �������� ���. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ����� ������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[1] = stoi(str);
				if (death[1] < 1 || death[1] > 12)
					cout << "������ �������� �����. ���������� ��� ���: " << endl;
				else
					flag = 0;
			}
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		flag = 1;
		cout << "������� ���� ������:" << endl;
		while (flag)
		{
			cin >> str;
			if (str.find_first_not_of("0123456789", 0) == string::npos)
			{
				death[0] = stoi(str);
				if (death[0] < 0 || death[0] > 31)
					cout << "������ �������� ����. ���������� ��� ���: " << endl;
				else
					switch (death[1])
					{
					case 1:
						flag = 0;
						break;
					case 2:
						if (death[0] > 29 || ((death[0] == 29) && (death[2] % 4 != 0)))
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
			else
				cout << "������������ ����. ���������� ��� ���: " << endl;
		}
		}
		this->set_death_date(death[0], death[1], death[2]);
		this->set_age();
		break;
	case 0:
		break;
	}
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
	if (is_dead == true)
	{
		int* d_date = this->get_death_date();
		cout << "���� ������: " << d_date[0] << "." << d_date[1] << "." << d_date[2] << endl;
	}
}

void Father::set_dead(bool _dead)
{
	this->is_dead = _dead;
}

void Father::file_load()
{
	ifstream fin;
	fin.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);
	string load_name;
	cout << "������� �������� �����, � ������� �������� ���������� �� ������� ������ Father." << endl;
	cout << "��������� ��������� �� �� ������ �� ��������� ��������: save_father_*��� ����*.txt. " << endl;
	cout << "��� ������ �����, ������� back: " << endl;
	while (!fin.is_open())
	{
		cin.ignore();
		getline(cin, load_name);
		try
		{
			if (load_name == "back")
			{
				break;
			}
			fin.open(load_name);
		}
		catch (const std::ios_base::failure& e)
		{
			std::cerr << "can not open file\nwhat: " << e.what() << "\n";
		}
	}
	if (load_name != "back")
	{
		string _fio, _fio_m, _fio_f, _fio_c;
		int birth[3], death[3], date;
		bool dead;
		getline(fin, _fio);
		getline(fin, _fio_m);
		getline(fin, _fio_f);
		getline(fin, _fio_c);
		for (int i = 0; i < 3; i++)
		{
			fin >> date;
			birth[i] = date;
		}
		fin >> dead;
		for (int i = 0; i < 3; i++)
		{
			fin >> date;
			death[i] = date;
		}
		fin.close();
		this->set_birth_date(birth[0], birth[1], birth[2]);
		this->set_dead(dead);
		this->set_death_date(death[0], death[1], death[2]);
		this->set_fio(_fio);
		this->set_family(_fio_m, _fio_f, _fio_c);
		this->set_age();
	}
}

void Father::file_save()
{
	ofstream fout;
	string save_name = "save_father";
	save_name = save_name + "_" + this->get_fio() + ".txt";
	fout.open(save_name);
	string* family = this->get_family();
	int* date = this->get_birth_date();
	fout << this->get_fio() << endl;
	fout << family[0] << endl;
	fout << family[1] << endl;
	fout << family[2] << endl;
	fout << date[0] << endl;
	fout << date[1] << endl;
	fout << date[2] << endl;
	fout << this->is_dead << endl;
	date = this->get_death_date();
	fout << date[0] << endl;
	fout << date[1] << endl;
	fout << date[2] << endl;
	fout.close();
}