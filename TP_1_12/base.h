#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Base
{
private:
	string fio;
	int birth_date[3];
	int death_date[3];
	int age;
	string family[3];
public:
	Base() { fio = ""; birth_date[0] = 0; birth_date[1] = 0;
	birth_date[2] = 0; death_date[0] = 0; death_date[1] = 0;
	death_date[2] = 0; age = 0; family[0] = ""; family[1] = ""; family[2] = "";
	}
	Base(const Base& base_copy) {};
	~Base() = default;
	void set_fio(string _fio);
	string get_fio();
	void set_birth_date(int _day, int _month, int _year);
	int* get_birth_date();
	void set_death_date(int _day, int _month, int _year);
	int* get_death_date();
	void set_age();
	int get_age();
	void set_family(string fio_m, string fio_f, string fio_c);
	string* get_family();
	//virtual void file_load() = 0;
	//virtual void file_save() = 0;
	virtual void print_info() = 0;
};