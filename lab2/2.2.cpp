#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cout << "������� ����� �: " << endl;
	cin >> a;

	cout << "������� ����� B: " << endl;
	cin >> b;


	cout << "������� ����� �: " << endl;
	cin >> c;

	double ac, bc, sum;

	ac = fabs(c - a);
	bc = fabs(c - b);
	sum = ac + bc;

	cout << "������� AC: " << ac << endl;
	cout << "������� BC: " << bc << endl;
	cout << "����� ��������: " << sum << endl;
	
	return 0;

}