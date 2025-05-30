#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
	public:
		virtual void fun1()
		{

		}
};

class MyClass : public Base
{

};

class YourClass : public Base
{

};




int main()
{
	Base* b1, * b2;
	MyClass m;
	YourClass y;

	b1 = &m;
	b2 = &y;

	/*
	   This code uses **Run-Time Type Information (RTTI)**, specifically `typeid`,
	   to dynamically determine and compare the actual types of objects pointed to by base class pointers.
	*/
	cout << typeid(b1).name() << endl;
	cout << typeid(b2).name() << endl;
	cout << typeid(*b1).name() << endl;
	cout << typeid(*b2).name() << endl;

	if (typeid(*b1) == typeid(*b2))
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Unequal" << endl;
	}

	cout << typeid(45).name() << endl;
	cout << typeid('4').name() << endl;
	cout << typeid(4.5+22).name() << endl;
	return 0;
}
