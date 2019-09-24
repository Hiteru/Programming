#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cout << "Введите точку А: " << endl;
	cin >> a;

	cout << "Введите точку B: " << endl;
	cin >> b;
		
		if (a > b) {
				
			int tmp = b;
			b = a;
			a = tmp;
		}

		do  {

		cout << "Введите точку С, которая находится между точками А и В: " << endl;
		cin >> c;

		}
		while (c < a || c > b);

	

	double ac, bc, sum;

	ac = fabs(c - a);
	bc = fabs(c - b);
	sum = ac * bc;

	cout << "Произведение отрезков: " << sum << endl;

	return 0;

}