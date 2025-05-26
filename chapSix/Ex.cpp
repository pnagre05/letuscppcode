#include <iostream>
using namespace std;

const int MAX = 10;

class Ex
{
	public:
		void fun()
		{
			cout << "Inside Ex - fun()" << endl;
		}

		void save()
		{
			cout << "Inside Ex - save()" << endl;
		}

		void enc()
		{
			cout << "Inside Ex - enc()" << endl;
		}

		void open()
		{
			cout << "Inside Ex - open()" << endl;
		}
};

class NewEx : public Ex
{
public:
	void save()
	{
		cout << "Inside NewEx - save()" << endl;
	}

	void enc()
	{
		cout << "Inside NewEx - enc()" << endl;
	}

	void autoUpdate()
	{
		cout << "Inside NewEx - autoUpdate()" << endl;
	}

	void open()
	{
		cout << "Inside NewEx - open()" << endl;
		Ex::open();
	}
};

int main() 
{
	NewEx e;
	e.fun();
	e.save();
	e.enc();
	e.autoUpdate();
	e.open();
}
