#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int X, A, Y;
	
	cout << "������� ������� ������ � �� (�): " << endl;	
	cin >> X;
	cout << "������� ������� ����� � ������ � ������ (A): " << endl;

	cin >> A;
	A = A / X ;

	cout << "���� �� ������ ����� " << A << " ������" << endl;


	cout << "������� ���������� ������ � ��: " << endl;
	cin >> Y;

	
	A = A * Y;

	cout << "��������� � �� " << Y << " ������ - " << A << " ������" << endl;

	return 0;

}