// Lab_03_1.cpp
// Коць Олексій
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат
	double B;

	cout << "x ="; cin >> x;

	A = pow(x, 3) + 2;

	// розгалуження в скороченій формулі
	if (x < 4)
		B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
	if (4 <= x && x <= 7)
		B = atan(fabs((x + 3) / 2)) + 7 * x;
	if (x >= 7)
		B = log10(2 * x + exp(5 * x + 5));

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// розгалуження в повінй формі
	if (x < 4)
		B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
	else
		if (x >= 7)
		B = log10(2 * x + exp(5 * x + 5));
		else 
			B = atan(fabs((x + 3) / 2)) + 7 * x;

	y = A + B;

	cout << endl;
	cout << "2) y = " << y << endl;
	
	cin.get();
	return 0;



}

