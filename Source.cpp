#include<iostream>
using namespace std;
#include "Header.h";
void fun1() {
	srand(time(0));
	matrix I;
	I.Out();
}
void fun2() {
	cout << "Каких размеров будете вводить матрицу?" << endl;
	int ab, ba;
	cin >> ab >> ba;
	matrix A(ab, ba);
	cout << "Работа с матрицей из конструктора с параметрами" << endl;
	A.In();
	A.Out();
	matrix B(A);
	cout << "Работа с матрицей из конструктора копирования" << endl;
	B.Out();
}
void fun3() {
	cout << "Создание рандомных матриц рандомных значений" << endl;
	matrix I, B;

	cout << "Работа оператора !=" << endl;
	cout << "Матрица I " << endl;
	I.Out();
	cout << "Матрица B " << endl;
	B.Out();
	if (I != B)
		cout << "True";
	else
		cout << "False";

	cout << endl << "Работа оператора = " << endl;
	cout << "До, матрица I" << endl;
	I.Out();
	cout << "матрица B" << endl;
	B.Out();
	cout << "После, матрица I" << endl;
	I = B;
	I.Out();
}
void fun4() {
	cout << "Работа перегрузки дружественных функций << и >>" << endl;
	int q, w;
	cout << "Размерность " << endl;
	cin >> q >> w;
	matrix example_1(q, w);
	cin >> example_1;
	cout << example_1;
}
matrix::matrix() {
	this->n = rand() % 10 + 1;// from 1 to 10
	this->m = rand() % 10 + 1;
	delete[]p;
	p = new int[n * m];
	for (int i = 0; i < n * m;i++) {
		this->p[i] = rand() % 10;
	}
}
matrix::matrix(int n, int m) {
	this->m = m;
	this->n = n;
	p = new int[this->n * this->m];
}
matrix::matrix(matrix& Copy) {
	this->m = Copy.m;
	this->n = Copy.n;
	p = new int[n * m];
	for (int i = 0; i < n * m; i++) {
		p[i] = Copy.p[i];
	}
}
matrix::~matrix() {
	delete[] p;
	p = 0;
}
matrix& matrix::operator= (matrix& Copy) {
	if (this == &Copy)
		return *this;
	n = Copy.n;
	m = Copy.m;
	delete[]p;
	p = new int[n * m];
	for (int i = 0; i < n*m; i++) {
		p[i] = Copy.p[i];
	}
	return *this;
}
bool matrix::operator!= (matrix& Copy) {
	int size_1, size_2;
	size_1 = this->p[n] * this->p[m];
	size_2 = Copy.p[n] * Copy.p[m];
	if (size_1 == size_2)
		return false;
	else if (size_1 != size_2)
		return true;
}
void matrix::Out(void) {
	cout << "Матрица " << m << " * " << n << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout <<" " << p[i * m + j];

		cout << endl;
	}
}
void matrix::In(void) {
	cout << "Заполните "<< m<<" * "<< n << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> p[i*m + j];


		cout << endl;
	}
}
istream& operator>> (istream& fin, matrix& f) {
	f.In();
	return fin;
}
ostream& operator<< (ostream& fout, matrix& f) {
	f.Out();

	return fout;
}

