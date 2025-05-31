#include <iostream>
#include <string>
using namespace std;

class Employee
{	
	private:
		string name;
	public:
		Employee(string n)
		{
			name = n;
		}
		
		virtual void showData()
		{
			cout << "Name:" << name << endl;
		}
};

class Manager : public Employee
{
	private:
		double commission;
	public:
		Manager(string n, double comm) :Employee(n)
		{
			commission = comm;
		}

		virtual void showData()
		{
			cout << "Commission: " << commission << endl;
		}
};
int main()
{
	Employee e1("Dinesh");
	Manager m1("Suresh", 3000.0);

	Employee* pemp1, * pemp2;
	Manager* pmgr;

	pemp1 = &e1;
	pemp2 = &m1;

	pmgr = dynamic_cast<Manager*>(pemp1);
	cout << "pmgr = " << pmgr << endl;
	if (pmgr)
	{
		pmgr->showData();
	}
	else
	{
		cout << "pmgr contains null on downcasting" << endl;
	}

	pmgr = dynamic_cast<Manager*>(pemp2);
	cout << "pmgr = " << pmgr << endl;
	if (pmgr)
	{
		pmgr->showData();
	}
	else
	{
		cout << "pmgr contains null on downcasting" << endl;
	}

}
