#include <iostream>
using namespace std;

int main()
{
	bool isTodaySunny = true;
	bool isTodayWeekend = false;

	if (isTodaySunny && isTodayWeekend)
	{
		cout << "Today is sunny and weekend" << endl;
	}
	else if (isTodaySunny && !isTodayWeekend)
	{
		cout << "Today is sunny but not weekend" << endl;
	}
	else if (!isTodaySunny && isTodayWeekend)
	{
		cout << "Today is not sunny but weekend" << endl;
	}
	else if (!isTodaySunny && !isTodayWeekend)
	{
		cout << "Today is not sunny and not weekend" << endl;
	}

	if (isTodaySunny) {
		if (isTodayWeekend)
			cout << "go to the park" << endl;
		else
			cout << "work in park" << endl;
	}
	else
		cout << "stay home" << endl;

	// isTodaySunny ? cout << "Today is sunny" << endl : cout << "Today is not sunny" << endl;
}