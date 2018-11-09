#include "Matrix.h"
using namespace std;

void main() {
	Matrix m(5, 15, -3);
	Matrix b = m;
	m.print();
	cout << m[3][4]<<endl;
	m += 5;
	m.print();
	m.transp();
	m.print();
	system("pause");

}