#pragma once
#include "base.h"

class Child :public Base
{
private:
	bool is_dead;
public:
	Child();
	Child(const Child& child_copy);
	~Child();
	void file_load();
	void file_save();
	void print_info();
	void set_info();
	void set_dead(bool _dead);
	void change_info();
};
