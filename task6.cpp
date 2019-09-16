#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float a;
	cout <<"Введите значение переменной A"<< endl;
	cin >> a;

	a = pow(a,8);

	cout <<"A = "<< a << endl;
	
	system("pause");
	return 0;
}
