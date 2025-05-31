#include <iostream>
#include <string>
using namespace std;

class Base
{

};
class Derived : public Base
{

};
class Sample
{

};

class Employee
{
	string name;
public:
	Employee(string n)
	{
		name = n;
	}

	virtual void showData()
	{
		cout << "Name: " << name << endl;
	}
};

int main()
{
	int i = 10;
	long l = 123.2313333333333333333333333;
	float f = 67.89f;
	char str[] = "Nagpur";

	//narrowing conversions
	i = static_cast<int>(l);
	i = static_cast<int>(f);

	//conversion to void pointer to print address 
	void* vptr;
	vptr = static_cast<void*> (str);
	cout << vptr << endl;

	//conversion of unrelated types
	Sample* sptr;
	//sptr = (Sample*)baseptr;
	//sptr = static_cast<Sample*> (baseptr); this results in an error
	return 0;
}
