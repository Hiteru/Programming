#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int x1, y1, x2, y2;
	cout << "������� X ������ �����: " << endl;
	cin >> x1;

	cout << "������� Y ������ �����: " << endl;
	cin >> y1;

	cout << "������� X ������ �����: " << endl;
	cin >> x2;

	cout << "������� Y ������ �����: " << endl;
	cin >> y2;

	if (x1 > x2) {

		int buf1 = x1;
		x1 = x2;
		x2 = buf1;

	}

	if (y1 > y2) {

		int buf2 = y1;
		y1 = y2;
		y2 = buf2;

	}
		

	int P, S;

	P = ((x2 - x1) + (y2 - y1)) * 2;
	S = (x2 - x1) * (y2 - y1);


	cout << "�������� ��������������: " << P << endl;
	cout << "������� �������������� : " << S << endl;

	return 0;

}