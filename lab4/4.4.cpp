#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float A, B, S, T;
	cout << "¬ведите скорость первого и второго автомобил€ в км/ч: ";
	cin >> A >> B;
	cout << "¬ведите рассто€ние между ними в км: ";
	cin >> S;

	cout << "¬ведите врем€ в часах: ";
	cin >> T;

	S = (A + B) * T + S;

		cout << "„ерез " << T << " часов рассто€ние будет " << S << " км";

	return 0;

}