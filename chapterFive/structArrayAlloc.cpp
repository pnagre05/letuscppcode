#include <iostream>

using namespace std;



struct Employee

{
	string name;
	int age;
	float salary;
};



int main()

{
	//static memory allocation
	int num[25];
	struct Employee e;

	//dynamic memory allocation
	int* ptprint = new int[25];
    struct Employee* ptr = new struct Employee;

	//use allocated entities
	ptprint[0] = 35;
	ptprint[20] = 40;
	ptr->name = "Aum";
	ptr->age = 19;
	ptr->salary = 1234.56f;

	//use delete [] whenever you do new []

	delete[] ptprint;
	delete ptr;

}
