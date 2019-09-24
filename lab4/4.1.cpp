#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float A;
	float B;

	cout << "Введите угол А в градусах: " << endl;
	cin >> A;

	while ((0  > A || A > 360)) {
		cout << "Угол указан неправильно!" << endl;

		cout << "Введите угол А в градусах: " << endl;
		cin >> A;

	}

	B = A / 180;

	cout << "Угол равен " << B << " радиан!" << endl;

	return 0;

}