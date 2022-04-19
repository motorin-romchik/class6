#ifndef HEADER_H
#define HEADER_H
class matrix
{
	int n, m;
	int* p;
public:
	matrix();
	matrix(int n, int m);
	matrix(matrix &Copy);
	void Out();
	void In();
	matrix& operator = (matrix& Copy);
	bool operator!= (matrix& Copy);
	friend istream& operator>> (istream& fin, matrix& f);
	friend ostream& operator<< (ostream& fout, matrix& f);
	~matrix();

};
#endif