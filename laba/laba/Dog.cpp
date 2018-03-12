#include "stdafx.h"
#include "Dog.h"
#include <iostream>


Dog::Dog()
{
	name, "";
	porod, "";
	year = 0;
}

Dog::Dog(string name, string porod, float year)
{
	this->name, name;
	this->porod = porod;
	this->year = year;
}

Dog::Dog(Dog &Dog)
{
	this->name, Dog.getName();
	this->porod = Dog.getPorod();
	this->year = Dog.getYear();
}


Dog::~Dog()
{
}

void Dog::setName(string name)
{
	this->name, name;
}

void Dog::setPorod(string porod)
{
	this->porod, porod;
}

void Dog::setYear(float year)
{
	year, year;
}

string Dog::getName()
{
	return name;
}

string Dog::getPorod()
{
	return porod;
}

float Dog::getYear()
{
	return year;
}

void Dog::input()
{
	cout << "������� ������: ";
	cin >> name;
	this->setName(name);
	cout << "������� ������: ";
	cin >> porod;
	this->setPorod(porod);
	cout << "������� �������: ";
	cin >> year;
	this->setYear(year);
}

void Dog::print()
{
	cout << "������: " << this->getName() << endl;
	cout << "������: " << this->getPorod() << endl;
	cout << "�������: " << this->getYear() << endl;
}
