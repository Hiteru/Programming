#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int x1, y1, x2, y2;
	cout << "Введите X первой точки: " << endl;
	cin >> x1;

	cout << "Введите Y первой точки: " << endl;
	cin >> y1;

	cout << "Введите X второй точки: " << endl;    
	cin >> x2;

	cout << "Введите Y второй точки: " << endl;
	cin >> y2;
	
	double seg;
	seg = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Расстояние между точками: " << seg;
	return 0;

}
