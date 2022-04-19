/*Класс – матрица. 
Добавить перегрузку операции
Объект1!=Объект2 
Так, чтобы сравнивались размеры матрицы.
	Конструктор с параметрами
	Конструктор без параметров
	Конструктор копий
	Деструктор
	Перегрузить операцию присваивания
Перегрузить операции >>  и  << дружественными функциями.
*/
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
#include "Header.h"
void fun1();
void fun2();
void fun3();
void fun4();
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (;;) {
		cout << "Меню" << endl;
		cout << "1.конструктор по умолчанию" << endl;
		cout << "2.конструктор с параметрами и конструктор копии" << endl;
		cout << "3.Перегрузка операторов != и ="<< endl;
		cout << "4.<< и >> через дружественные функции" << endl;
		cout << "5.Выход"<<endl;
		int choose = 0;
		cout << "Выбор: "; cin >> choose;
		switch (choose) {
		case 1:
			cout << "\nконструктор по умолчанию" << endl;
			fun1();
			break;
		case 2:
			cout << "\nконструктор с параметрами и конструктор копии" << endl;
			fun2();
			break;
		case 3:
			cout << "\nПерегрузка операторов =/!=" << endl;
			fun3();
			break;
		case 4:
			cout << "\n<< и >> через дружественные функции" << endl;
			fun4();
			break;
		case 5:
			exit(0);
		}
	}
}