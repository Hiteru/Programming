#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cout << "Введите точку А: " << endl;
	cin >> a;

	cout << "Введите точку B: " << endl;
	cin >> b;


	cout << "Введите точку С: " << endl;
	cin >> c;

	double ac, bc, sum;

	ac = fabs(c - a);
	bc = fabs(c - b);
	sum = ac + bc;

	cout << "Отрезок AC: " << ac << endl;
	cout << "Отрезок BC: " << bc << endl;
	cout << "Сумма отрезков: " << sum << endl;
	
	return 0;

}