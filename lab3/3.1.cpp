#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int A, B, temp;
	cout << "������� � � �: " << endl;
	cin >> A >> B;
	
	temp = A;
		A = B;
		B = temp;

		cout << A << " " << B << endl;
	return 0;

}