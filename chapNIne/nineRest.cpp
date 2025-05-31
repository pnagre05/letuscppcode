#include <iostream>
#include <string> // Not strictly necessary for this code, but harmless.
using namespace std;

// Fix: Change the prototype to accept a const char*
void display(const char*);

struct Sample
{
	int a;
	float b;
};

int main() {
	const char* ptr = "What's up?";
	// Fix: Remove the const_cast, as display now expects a const char*
	display(ptr);
	return 0;
}

// Fix: Change the function definition to accept a const char*
void display(const char *p)
{
	cout << p << endl;

	// These lines demonstrate "pointers to members" and are syntactically correct.
	// No errors here.
	int Sample::* p1 = &Sample::a;
	float Sample::* p2 = &Sample::b;

	Sample so = { 10, 3.14f };
	cout << so.*p1 << endl << so.*p2 << endl;

	Sample* sp;
	sp = &so;
	cout << sp -> * p1 << endl << sp -> * p2 << endl;

	so.*p1 = 20;
	sp->*p2 = 6.28f;
	cout << so.*p1 << endl << so.*p2 << endl;
	cout << sp -> * p1 << endl << sp -> * p2 << endl;

}
