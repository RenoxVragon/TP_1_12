#pragma once
#include "base.h"

class Father :public Base
{
private:
	bool is_dead;
public:
	Father();
	Father(const Father& father_copy);
	~Father();
	//void file_load();
	//void file_save();
	void print_info();
	void set_info();
	void change_info();
};