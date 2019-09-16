#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float x,y;
	cout <<"Введите значение переменной X для уравнения y = 4*(x - 3)^6 - 7*(x - 3)^3 + 2"<< endl;
	cin >> x;

	y = 4 * (pow(x - 3,6)) - 7 * (pow(x - 3,2)) + 2;

	cout <<"Значение функции уравнения y = 4*(x - 3)^6 - 7*(x - 3)^3 + 2 = "<< y << ", при x = "<< x << endl;
	
	system("pause");
	return 0;
}
