#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	double x1, y1, x2, y2, x3, y3;
	cout << "������� X ������ �����: " << endl;
	cin >> x1;

	cout << "������� Y ������ �����: " << endl;
	cin >> y1;

	cout << "������� X ������ �����: " << endl;
	cin >> x2;

	cout << "������� Y ������ �����: " << endl;
	cin >> y2;

	cout << "������� X ������� �����: " << endl;
	cin >> x3;

	cout << "������� Y ������� �����: " << endl;
	cin >> y3;

	double P, S;
	P = fabs(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)));
	S = fabs((((x1 - x3) * (y2 - y3)) - ((x2 - x3) * (y1 - y3))) / 2); 

	cout << "�������� ������������: " << P << endl;
	cout << "������� ������������: " << S << endl;
	return 0;

}
