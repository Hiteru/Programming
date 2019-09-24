#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int A, B;
	cout << "Введите А: " << endl;
	cin >> A;

	A = A * A;
	B = A * A;
	A = B * B;



	cout << "A^8 = " << A << endl;
	return 0;

}