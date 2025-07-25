#include <iostream>
using namespace std;

class Shape
{
	public:
		// Pure virtual function: forces all derived classes to implement draw()
		virtual void draw() = 0;
};

class Circle : public Shape
{
	public:
		void draw() override
		{
			cout << "In Circle Class" << endl;
		}
};

class Rectangle : public Shape
{
	public:
		void draw() override
		{
			cout << "In Rectangle Class" << endl;
		}
};

int main() 
{
	Circle c1, c2, c3;
	Rectangle r1, r2, r3;

	int i;

	Shape* p[] = { &c1, &c2, &r1, &r2, &r3, &c3 };
	for (i = 0; i <= 5; i++)
	{
		p[i]->draw();  // Calls the appropriate overridden draw() using dynamic dispatch
	}
	return 0;
}
