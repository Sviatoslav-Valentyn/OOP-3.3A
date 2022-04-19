#include "Point.h"
#include "P.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	P x;
	cout << "Input point  " << endl;
	cin >> x;
	cout << " Полярні координати: " << x.Angle() << endl;
	cout << " Відстань до початку координат: " << x.Origin() << endl;
	P y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << " Полярні координати: " << y.Angle() << endl;
	cout << " Відстань до початку координат: " << y.Origin() << endl;

	if (x == y)
	{
		cout << "Два обєкти є рівні\n";
	}
	if (x != y)
	{
		cout << "Два обєкти не є рівні\n";
	}


	cin.get();
	return 0;
}
