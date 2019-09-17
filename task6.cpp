#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a;
	cout << "Введите значение переменной А" << endl;
	cin >> a;

	a = a * a;
	a = a * a;
	a = a * a;

	cout << "А = " << a << endl;

	system("pause");
	return 0;
}
