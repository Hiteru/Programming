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
	
	double seg;
	seg = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "���������� ����� �������: " << seg;
	return 0;

}
