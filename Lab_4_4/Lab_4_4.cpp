// Lab_4_4.cpp
// Козубенко Андрій
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 10
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;

	for (double x = xp; x <= xk; x += dx) 
	{
		if ((x <= -8.0 - R) || (x > -8.0 + R && x <= -4.0))
			y = R;
		else
			if (x > -8.0 - R && x <= -8.0 + R)
				y = R - sqrt(R * R - (x + 8.0) * (x + 8.0));
			else
				if (x > -4.0 && x <= 2.0)
					y = (-x) * R / 4.0;
				else
					y = x - 3.0;

		cout << "|" << setw(7) << setprecision(2) << x
			 << "   |" << setw(10) << setprecision(3) << y
			 << "    |" << endl;
	}
	cout << "---------------------------" << endl;

	return 0;
}