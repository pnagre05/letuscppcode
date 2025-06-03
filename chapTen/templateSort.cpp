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

		int operator > (Date dt)
		{
			if (year > dt.year)
			{
				return 1;
			}
			if(year == dt.year && mon > dt.mon)
			{
			}
			if (year == dt.year && mon == dt.mon && day > dt.day)
			{
				return 1;
			}
			return 0;
		}
		friend ostream& operator << (ostream& o, Date& dt)
		{
			o << dt.day << "/" << dt.mon << "/" << dt.year;
			return o;
		}

};

template <class T>
void selectionSort(T a[], int sz)
{
	T temp;
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i]; a[i] = a[j]; a[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[]{ -12, 23, 14, 0, 245, 78, 66, -9 };

	Date dtarr[] = {
		Date(17, 11, 62), Date(23, 12, 65), Date(12, 12, 78), Date(23, 10, 69)
	};

	int i;
	selectionSort(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl << endl;
	selectionSort(dtarr, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << dtarr[i] << endl;
	}

	return 0;
}


