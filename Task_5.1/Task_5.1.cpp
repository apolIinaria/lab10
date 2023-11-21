
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double x, y;

	cout << "Введіть значення х: ";
	cin >> x;

	cout << "Введіть значення у: ";
	cin >> y;

	if (x <= -2 || x <= -0.5)
	{
		cout << "Недопустиме значення х" << endl;
	}
	else if (y <= -(1/3))
	{
		cout << "Недопустиме значення у" << endl;
	}
	else 
	{
		double result = sqrt((x + 2) / (3 * y + 1)) + ((8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2))) * ((x + 0.5) / (9 * y + 3));
		cout << "Значення виразу: " << result << endl;
	}

	return 0;
}
