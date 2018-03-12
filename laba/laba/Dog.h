#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Dog{
private: 
	string name;
	string porod;
	float year;
public:
	Dog();
	Dog(string name, string porod, float year);
	Dog(Dog &dog);
	~Dog();
	void setName(string name);
	void setPorod(string porod);
	void setYear(float year);
	string getName();
	string getPorod();
	float getYear();
	void input();
	void print();
};

