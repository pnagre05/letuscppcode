#include <iostream>
using namespace std;


int main() 
{
	//static memory allocation
	int i;
	float a;
	char ch;

	//dynamic memory allocation
	int* ptrint = new int;
	float* ptrfloat = new float;
	char* ptrchar = new char;

	*ptrint = 35;
	*ptrfloat = 3.14;
	*ptrchar = 'a';

	cout << "memory address of ptrint: " << ptrint << endl;
	cout << "memory address of ptrfloat: " << ptrfloat << endl;
	cout << "memory address of ptrchar: " << ptrchar << endl;

	cout << "value of ptrint: " << *ptrint << endl;
	cout << "value of ptrfloat: " << *ptrfloat << endl;
	cout << "value of ptrchar: " << *ptrchar << endl;

	delete ptrint;
	delete ptrfloat;
	delete ptrchar;



}
