#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b;
	cout << "Введите значение переменной А" << endl;
	cin >> a;

	b = a;
	a = a * a;
	a = a * b;
	b = a;
	a = a * a;
	a = a * a;
	a = a * b;

	cout << "А = " << a << endl;

	system("pause");
	return 0;
}
