#include <iostream>
#include <string>
using namespace std;

class Date
{
	private:
		int day, mon, year;
	public:
		Date(int d, int m, int y)
		{
			day = d;
			mon = m;
			year = y;
		}

		int operator < (const Date dt)
		{
			if (year < dt.year)
			{
				return 1;
			}
			if (year == dt.year && mon < dt.mon)
			{
				return 1;
			}
			if (year == dt.year && mon == dt.mon && day < dt.day)
			{
				return 1;
			}
			return 0;
		}
		friend ostream& operator << (ostream& o, const Date& dt);
};

ostream& operator << (ostream& o, const Date& dt)
{
	o << dt.day << "/" << dt.mon << "/" << dt.year;
	return o;
}

template<class T>

T myMin(T a, T b)
{
	return (a < b) ? a : b;
}

int main() 
{
	int i = 10, j = 20;
	cout << myMin(i, j) << endl;
	Date dt1(17, 11, 62), dt2(23, 12, 65);
	cout << myMin(dt1, dt2) << endl << endl;
	return 0;
}


