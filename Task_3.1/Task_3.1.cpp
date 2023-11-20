
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.14159265358979323846;
	double alphaDegrees;

	cout << "Введіть значення кута α в градусах: ";
	cin >> alphaDegrees;

	double alphaRadians = alphaDegrees * PI / 180;

	double z1 = 2 * pow(sin(3 * PI - 2 * alphaRadians), 2) * pow(cos(5 * PI + 2 * alphaRadians), 2);

	double z2 = 1.0 / 4.0 - 1.0 / 4.0 * sin(5.0 / 2.0 * PI - 8 * alphaRadians);

	cout << "Відповідь за першою формулою (z1): " << z1 << endl;
	cout << "Відповідь за другою формулою (z2): " << z2 << endl;

	return 0;
}
