#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int A, B, C;
	cout << "Введите А: " << endl;
	cin >> A;
	B = A * A; 
	C = B* A;
	A = B * C;
	A = A * A * A;

	
	
	cout << "A^15 = " << A << endl;
	return 0;

}