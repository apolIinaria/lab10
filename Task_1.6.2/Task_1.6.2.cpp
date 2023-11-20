
#include <iostream>

using namespace std;

int main()
{
	double costPerMeter;
	double lenght, width;

	cout << "Введіть вартість 1 метра тканини: ";
	cin >> costPerMeter;

	cout << "Введіть довжину відрізу тканини в метрах: ";
	cin >> lenght;

	cout << "Введіть ширину відрізу тканини в метрах: ";
	cin >> width;

	double totalCost = costPerMeter * lenght * width;

	cout << "Підсумкова варстість тканини: " << totalCost << " грн" << endl;

	return 0;
}
