#include "Airline.h"
#include <ctime>

class Initializer
{
public:
	void init(Airline*& list, int count)
	{
		srand(time(0));

		if (list == nullptr && count > 0)
		{
			list = new Airline[count];
		}

		string directorNames[]
		{
			"Alex", "Matvey", "Veronika",
			"Sofia", "Alice", "Anna", "Stepan", "Daniil",
			"Arseniy", "Vlad", "Bogdan", "Viktor", "Ilya",
			"Peter", "Harry", "Gleb"
		};

		string names[]
		{
			"Summit Air", "Global Horizon Airlines",
			"Aurora Jet", "Qantas",
			"Pacific Swift", "Northern Star Aviation",
			"Solaris Air", "BlueWind Airlines",
			"SkyWings Global", "Aurora Airways",
			"Pegasus Aviation", "Oceanic Express",
			"Horizon Jet", "Nova Airlines",
			"Silver Falcon", "Phoenix Air Group"
		};

		string country[]
		{
			"Belarus", "USA", "Germany", "UK",
			"Thailand", "Japan", "Lithuania",
			"Finland", "Canada", "France", "China",
			"Poland", "Italy", "Egypt", "India", "Mexico"
		};

		int minYear = 1903;
		int maxYear = 2025;

		int minEmployee = 1;
		int maxEmployee = 200'000; // the biggest airline has 130'000 employees

		int minSize = 0;
		int maxSize = 1500;

		for (int i = 0; i < count; i++)
		{
			list[i].directorName = directorNames[rand() % 16];
			list[i].name = names[rand() % 16];
			list[i].country = country[rand() % 16];
			list[i].foundationYear = rand() % (maxYear - minYear + 1) + minYear;
			list[i].parkSize = rand() % (maxSize - minSize + 1) + minSize;
			list[i].employee = rand() % (maxEmployee - minEmployee + 1)
				+ minEmployee;
		}
	}
};