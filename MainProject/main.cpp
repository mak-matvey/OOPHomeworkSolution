#include "Initializer.h"

int main(void)
{
	Airline* list = nullptr;
	Initializer initializer;

	int count;

	cout << "Input number of airlines: ";
	cin >> count;

	initializer.init(list, count);

	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
}