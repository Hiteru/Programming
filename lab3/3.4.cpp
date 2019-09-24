#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int X;
	float Y;
	cout << "Введите X для функции y = 3x^6 - 6x^2 - 7: " << endl;
	cin >> X;

	Y = (3 * pow(X, 6)) - (6 * pow(X, 2)) - 7;

	cout << "При данном значении Х, Y = " << Y << endl;
	return 0;

}