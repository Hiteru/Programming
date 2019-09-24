#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int X;
	float Y;
	cout << "Введите X для функции y = 4(x - 3)^6 - 7(x - 3)^3 + 2: " << endl;
	cin >> X;

	Y = (4 * pow(X - 3, 6)) - (7 * pow(X - 3, 3)) + 2;

	cout << "При данном значении Х, Y = " << Y << endl;
	return 0;

}