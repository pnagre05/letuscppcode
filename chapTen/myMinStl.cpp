#include <iostream>
#include <string>
using namespace std;

template <class T>
T myMin(T a, T b)
{
	return (a < b) ? a : b;
}

int main() 
{
	int i = 10, j = 20;
	cout << myMin(i, j) << endl;

	float a = 3.14f, b = -6.28f;
	cout << myMin(a, b) << endl;

	char ch = 'A', dh = 'Z';
	cout << myMin(ch, dh) << endl;

	double d = 1.1, e = 1.11;
	cout << myMin(d, e) << endl << endl;

	return 0;
}


