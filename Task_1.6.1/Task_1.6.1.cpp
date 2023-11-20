
#include <iostream>

using namespace std;

int main()
{
	double costPerPage;
	int totalPages;

	cout << "Введіть вартість однієї сторінки тексту: ";
	cin >> costPerPage;

	cout << "Введіть кількість перекладених сторінок: ";
	cin >> totalPages;

	double salary = costPerPage * totalPages;

	cout << "Заробітна плата перекладача: " << salary << " грн" << endl;

	return 0;
}
