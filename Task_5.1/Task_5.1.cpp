
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

	double part1 = sqrt((x + 2) / (3 * y + 1));
	double part2 = ((8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2))) * ((x + 0.5) / (9 * y + 3));

	if (3 * y + 1 == 0 || 1 - 9 * pow(y, 2) == 0 || 9 * y + 3 == 0)
	{
		cout << "Помилка" << endl;
	}
	else
	{
		double result = part1 + part2;
		cout << "Значення виразу: " << result << endl;
	}
}
