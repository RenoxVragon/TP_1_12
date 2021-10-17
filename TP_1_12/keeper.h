#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Keeper
{
private:
	T* arr;
	int size;
public:
	Keeper();
	Keeper(int _size);
	Keeper(const Keeper<T>& keeper_copy);
	~Keeper();
	void set_size(int _size);
	int get_size();
	void push_back(T data);
	void del(int j);
	T& operator[] (int i);
	Keeper<T>& operator = (const Keeper<T>& keeper_copy);
};

template <class T>
Keeper<T>::Keeper()
{
	cout << "Constructor default Keeper." << endl;
	this->size = 0;
	this->arr = new T[this->get_size()];
}

template <class T>
Keeper<T>::Keeper(int _size)
{
	cout << "Constructor parameter Keeper." << endl;
	this->size = _size;
	this->arr = new T[this->get_size()];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}

template <class T>
Keeper<T>::Keeper(const Keeper<T>& keeper_copy)
{
	cout << "Constructor copy Keeper." << endl;
	*this = keeper_copy;
}

template <class T>
Keeper<T>& Keeper<T>::operator = (const Keeper<T>& keeper_copy)
{
	if (&keeper_copy == this) return *this;
	delete[] arr;

	size = keeper_copy.size;
	arr = new T[size];
	for (int i = 0; i < size; ++i)
		arr[i] = keeper_copy.arr[i];
	return *this;
}

template <class T>
Keeper<T>::~Keeper()
{
	cout << "Deconstructor Keeper." << endl;
	delete[] arr;
	size = 0;
}

template <class T>
T& Keeper<T>::operator[] (int i)
{
	//std::string err = "Index " + std::to_string(i) + " does not exist";
	//if (i < 0 || i >= size)
	//	throw err;
	return arr[i];
}

template <class T>
void Keeper<T>::push_back(T data)
{
	T* tmp = arr;
	size++;
	arr = new T[size];
	for (int i = 0; i < size - 1; i++)
		arr[i] = tmp[i];
	arr[size - 1] = data;

}

template <class T>
void Keeper<T>::set_size(int _size)
{
	this->size = _size;
}

template <class T>
int Keeper<T>::get_size()
{
	return this->size;
}

template <class T>
void Keeper<T>::del(int j)
{
	if (size > 1)
	{
		T* tmp = arr;
		size--;
		arr = new T[size];
		int k = 0;
		for (int i = 0; i < size + 1; i++)
		{
			if (i != j)
			{
				arr[k] = tmp[i];
				k++;
			}
		}
	}
	else
	{
		size--;
		arr = new T[0];
	}

}