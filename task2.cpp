#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float a,b,c,d,e;
	cout <<"Введите перменную A, затем B, потом C"<< endl;
	cin >> a >> b >> c;

	d = b;
	e = c;
	b = a;
	c = d;
	a = e;

	cout <<"переменная A = "<< a << endl << "переменная B = "<< b << endl << "переменная C = "<< c << endl;
	
	system("pause");
	return 0;
}
