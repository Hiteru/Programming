#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float A, B, S, T;
	cout << "������� �������� ������� � ������� ���������� � ��/�: ";
	cin >> A >> B;
	cout << "������� ���������� ����� ���� � ��: ";
	cin >> S;

	cout << "������� ����� � �����: ";
	cin >> T;

	S = (A + B) * T + S;

		cout << "����� " << T << " ����� ���������� ����� " << S << " ��";

	return 0;

}