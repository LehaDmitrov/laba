// laba.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Dog.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	Dog *Taksa = new Dog();
	Taksa->input();
	Taksa->print();
	Dog *Terer = new Dog("Бобик", "Терьер", 10);
	Terer->print();
	Dog *Bylt = new Dog(*Terer);
	Bylt->print();
	Bylt->input();
	Bylt->print();
	system("pause");
    return 0;
}

