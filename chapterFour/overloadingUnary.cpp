#include <iostream>
using namespace std;

class Index
{
	private:
		int count;
	public:
		Index()
		{
			count = 0;
		}
		
		Index(int i)
		{
			count = i;
		}

		Index operator ++()
		{
			++count;
			return *this;
		}

		Index operator++(int)
		{
			Index temp(count);
			count++;
			return temp;
		}

		void showData()
		{
			cout << count << endl;
		}
};

int main()
{
	Index c, d, e, f;
	cout << " c = ";
	c.showData();
	d = ++c;
	cout << "c = ";
	c.showData();
	cout << "d = ";
	d.showData();

	cout << "e = ";
	e.showData();
	f = e++;
	cout << "e = ";
	e.showData();
	cout << "f = ";
	f.showData();

	return 0;

}
