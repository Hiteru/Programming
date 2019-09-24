#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float A;
	float B;

	cout << "Введите угол А в радианах: " << endl;
	cin >> A;

	while ((0 > A || A > 2)) {
		cout << "Угол указан неправильно!" << endl;

		cout << "Введите угол А в радианах: " << endl;
		cin >> A;

	}

	B = A * 180;

	cout << "Угол равен " << B << " градусов!" << endl;

	return 0;

}