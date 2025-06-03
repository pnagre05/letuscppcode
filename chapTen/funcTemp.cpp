#include <iostream>
#include <string>
using namespace std;

class Date
{
	private:
		int day, mon, year;
	public:
		Date(int d = 0, int m = 0, int y = 0)
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
void mySwap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

int main() 
{
	int i = 10, j = 20;
	mySwap(i, j);
	cout << i << "\t" << j << endl;

	char ch = 'A', dh = 'Z';
	mySwap(ch, dh);
	cout << ch << "\t" << j << endl;

	Date dt1(17, 11, 62), dt2(23, 12, 65);
	mySwap(dt1, dt2);
	cout << dt1 << "\t" << dt2 << endl;

	return 0;
}


