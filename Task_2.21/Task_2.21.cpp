
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double xA = 0.0, yA = 0.0;
	double i;

	cout << "Введіть значення i: ";
	cin >> i;

	double xB = i;
	double yB = i - 1;
	double xC = -i;
	double yC = i + 1;

	double hc = abs((xB - xA) * (yC - yA) - (xC - xA) * (yB - yA)) / sqrt(pow(yC - yA, 2) + pow(xC - xA, 2));

	double AB = sqrt(pow(yB - yA, 2) + pow(xB - xA, 2));
	double AC = sqrt(pow(yC - yA, 2) + pow(xC - xA, 2));
	double wb = 2 * sqrt(AB * AC / (AB + AC));

	cout << "Висота трикутника (hc): " << hc << endl;
	cout << "Бісектриса трикутника (wb): " << wb << endl;

	return 0;
}
