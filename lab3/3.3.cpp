#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int A, B, C, temp1, temp2;
	cout << "Введите А B и C: " << endl;
	cin >> A >> B >> C;

	temp1 = A;
	temp2 = B;
	A = temp2;
	B = C;
	C = temp1;

	cout << A << " " << B << " " << C;
	return 0;

}