#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float x,y;
	cout <<"Введите значение переменной X для уравнения (y = 3*x^6 - 6*x^2 - 7)"<< endl;
	cin >> x;

	y = 3 * (pow(x,6)) - 6 * (pow(x,2)) - 7;

	cout <<"Значение функции уравнения (y = 3*x^6 − 6*x^2 − 7) = "<< y << ", при x = "<< x << endl;
	
	system("pause");
	return 0;
}
