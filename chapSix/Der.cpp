#include <iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base's 0 arg Ctor" << endl;
		}

		Base(int xx)
		{
			cout << "Base's 1-arg Ctor" << endl;
		}
};

class Derived : public Base
{
	public:
		Derived()
		{
			cout << "Der 0-arg Ctor" << endl;
		}

		Derived(int x) : Base(x)
		{
			cout << "Der's 1-arg Ctor" << endl;
		}
};

int main() 
{
	Derived y;
	Derived z(10);
}
