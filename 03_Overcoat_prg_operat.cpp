/*
* Создать класс Overcoat (верхняя одежда)
Реализовать перегруженные операторы:
1.  Проверка на равенство типов одежды (операция = =);
2.  Операцию присваивания одного объекта в другой 
(операция =);
3.  Сравнение по цене двух пальто одного типа (опера-
ция>).
*/
#include "Overcoat.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "-----------Сравнение одежды-----------" << endl << endl;

	Overcoat O1("пальто", 1000, 1);    
	Overcoat O2("куртка", 2000, 2);    
	Overcoat O3(" ", 0, 3);              //обьект для присваивания

	O1.print();
	O2.print();
	O3.print();

	O1 == O2;
	O1 > O2;
	O3 = O1;     
	cout << endl;
	O3.print();

	O2 > O3;
	cout << endl;

	O1 = O2;    
	O1.print();

	cout << endl;
	system("pause");
	return 0;
}

