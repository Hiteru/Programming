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
		
		if (a > b) {
				
			int tmp = b;
			b = a;
			a = tmp;
		}

		do  {

		cout << "������� ����� �, ������� ��������� ����� ������� � � �: " << endl;
		cin >> c;

		}
		while (c < a || c > b);

	

	double ac, bc, sum;

	ac = fabs(c - a);
	bc = fabs(c - b);
	sum = ac * bc;

	cout << "������������ ��������: " << sum << endl;

	return 0;

}