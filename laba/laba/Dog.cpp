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
	cout << "Введите кличку: ";
	cin >> name;
	this->setName(name);
	cout << "Введите породу: ";
	cin >> porod;
	this->setPorod(porod);
	cout << "Введите возраст: ";
	cin >> year;
	this->setYear(year);
}

void Dog::print()
{
	cout << "Кличка: " << this->getName() << endl;
	cout << "Порода: " << this->getPorod() << endl;
	cout << "Возраст: " << this->getYear() << endl;
}
