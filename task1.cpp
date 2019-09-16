#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	float a,b,c;
	cout <<"Введите перменную A, затем переменную B"<< endl;
	cin >> a >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout <<"переменная A = "<< a << endl << "переменная B = "<< b << endl;
	
	system("pause");
	return 0;
}
