#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float A;
	float B;

	cout << "������� ���� � � ��������: " << endl;
	cin >> A;

	while ((0 > A || A > 2)) {
		cout << "���� ������ �����������!" << endl;

		cout << "������� ���� � � ��������: " << endl;
		cin >> A;

	}

	B = A * 180;

	cout << "���� ����� " << B << " ��������!" << endl;

	return 0;

}