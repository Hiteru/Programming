#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int X, A, Y;
	
	cout << "Введите сколько конфет в кг (Х): " << endl;	
	cin >> X;
	cout << "Введите сколько стоят Х конфет в рублях (A): " << endl;

	cin >> A;
	A = A / X ;

	cout << "Один кг конфет стоит " << A << " рублей" << endl;


	cout << "Введите количество конфет в кг: " << endl;
	cin >> Y;

	
	A = A * Y;

	cout << "Стоимость Х кг " << Y << " конфет - " << A << " рублей" << endl;

	return 0;

}