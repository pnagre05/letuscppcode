#include <iostream>
using namespace std;

class Base
{
	protected:
		int data;
	public:
		Base()
		{
			data = 500;
		}
};

class Derived1 : virtual public Base
{

};

class Derived2 : virtual public Base
{

};

class Derived3 : public Derived1, public Derived2
{
	public:
		int getData()
		{
			return data;
		}
};

int main()
{
	Derived3 ch;
	int a;
	a = ch.getData();
	cout << a << endl;
	return 0;
}
