
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double b = 7;
	double x;

	cout << "Введіть значення х: ";
	cin >> x;

	double a = sqrt(pow(b + x, 2));
	double c = sqrt(log10(abs(b)));
	double y = pow(c, 2) + sqrt(abs(a));

	cout << "Значення функції у = " << y << endl;
}
