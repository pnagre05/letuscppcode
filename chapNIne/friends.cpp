#include <iostream>
using namespace std;

class Sample2;
class Sample1
{
	private:
		int data1;
	public:
		Sample1()
		{
			data1 = 100;
		}
		friend void accessOne(Sample1);
		friend void accessBoth(Sample1, Sample2);
};

class Sample2
{
	private:
		int data2;
	public:
		Sample2()
		{
			data2 = 200;
		}
		friend void accessBoth(Sample1, Sample2);
};

void accessOne(Sample1 x)
{
	cout << x.data1 << endl;
}

void accessBoth(Sample1 x, Sample2 y)
{
	cout << x.data1 + y.data2 << endl;
}

int main()
{
	Sample1 a;
	Sample2 b;
	accessOne(a);
	accessBoth(a, b);
	return 0;
}
