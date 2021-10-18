#define _CRT_SECURE_NO_WARNINGS 
#include "base.h"

Base::Base()
{
	cout << "Constructor default Base" << endl;
	fio = ""; 
	birth_date[0] = 0; 
	birth_date[1] = 0;
	birth_date[2] = 0; 
	death_date[0] = 0; 
	death_date[1] = 0;
	death_date[2] = 0; 
	age = 0; 
	family[0] = "";
	family[1] = ""; 
	family[2] = "";
}

Base::Base(const Base& base_copy)
{
	cout << "Constructor copy Base" << endl;
	fio = base_copy.fio;
	birth_date[0] = base_copy.birth_date[0];
	birth_date[1] = base_copy.birth_date[1];
	birth_date[2] = base_copy.birth_date[2];
	death_date[0] = base_copy.death_date[0];
	death_date[1] = base_copy.death_date[1];
	death_date[2] = base_copy.death_date[2];
	age = base_copy.age;
	family[0] = base_copy.family[0];
	family[1] = base_copy.family[1];
	family[2] = base_copy.family[2];
}

Base::~Base()
{
	cout << "Deconstructor default Base" << endl;
	fio = "";
	birth_date[0] = 0;
	birth_date[1] = 0;
	birth_date[2] = 0;
	death_date[0] = 0;
	death_date[1] = 0;
	death_date[2] = 0;
	age = 0;
	family[0] = "";
	family[1] = "";
	family[2] = "";
}


void Base::set_fio(string _fio)
{
	this->fio = _fio;
}

void Base::set_birth_date(int _day, int _month, int _year)
{
	birth_date[0] = _day;
	birth_date[1] = _month;
	birth_date[2] = _year;
}

void Base::set_death_date(int _day, int _month, int _year)
{
	death_date[0] = _day;
	death_date[1] = _month;
	death_date[2] = _year;
}

void Base::set_age()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	if (death_date[2] != 0)
		this->age = death_date[2] - birth_date[2];
	else
		this->age =  1900 + ltm->tm_year - birth_date[2];
}

void Base::set_family(string fio_m, string fio_f, string fio_c)
{
	family[0] = fio_m;
	family[1] = fio_f;
	family[2] = fio_c;
}

string Base::get_fio() { return fio; }
int Base::get_age() { return age; }
int* Base::get_birth_date() 
{ 
	//int day, month, year; 
	//day = birth_date[0]; 
	//month = birth_date[1];
	//year = birth_date[2];
	//return day, month, year;
	return birth_date;
}

int* Base::get_death_date()
{
	return death_date;
}

string* Base::get_family()
{
	return family;
}