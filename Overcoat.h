#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

class Overcoat
{
private:
	string type;
	int price;
	int number;
public:
	Overcoat() : type{ " " }, price{ 0 }, number{ 0 } {}
	Overcoat(string t_p, int p_r, int num) : type{ t_p }, price{ p_r }, number{ num } {}
	void print();
	friend void operator == (const Overcoat Ov1, const Overcoat Ov2) {
		if (Ov1.type == Ov2.type) cout << "Тип одежды №" << Ov1.number << " и №" << Ov2.number << " - " << Ov1.type << endl;
		else cout << "Типы одежды №" << Ov1.number << " и №" << Ov2.number << " разные" << endl;
	}
	friend void operator > (const Overcoat Ov1, const Overcoat Ov2) {
		if (Ov1.price > Ov2.price) cout << "Цена " << Ov1.type << " больше цены " << Ov2.type << endl;
		else cout << "Цена " << Ov1.type << " меньше цены " << Ov2.type << endl;
	}
	Overcoat& operator = (const Overcoat& Ov) {
		if (this == &Ov) return *this;
		type = Ov.type;
		price = Ov.price;
		return *this;
	}
};

