#pragma once
#include "base.h"

class Mother :public Base
{
private:
	bool is_dead;
public:
	Mother();
	Mother(const Mother& mother_copy);
	~Mother();
	//void file_load();
	//void file_save();
	void print_info();
	void set_info();
	void change_info();
};
