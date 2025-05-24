#include <iostream>
using namespace std;

class Circle
{
	private:
		int radius;
		float x, y;
	public: 
		Circle()
		{
			
		}
		Circle(int rr, float xx, float yy)
		{
			radius = rr;
			x = xx;
			y = yy;
		}
		Circle& operator = (Circle& c)
		{
			cout << "Assignment operator invoked" << endl;
			radius = c.radius;
			x = c.x;
			y = c.y;
			return *this;
		}
		Circle(Circle& c)
		{
			cout << "Copy constructor invoked" << endl;
			radius = c.radius;
			x = c.x;
			y = c.y;
		}
		void showData()
		{
			cout << "Radius = " << radius << endl;
			cout << "X - coordinate = " << x << endl;
			cout << "Y - coordinate = " << y << endl;
		}
};



int main()
{
	Circle c1(10, 2.5f, 2.5f);
	Circle c2, c3;
	c3 = c2 = c1;
	Circle c4 = c1;
	c1.showData();
	c2.showData();
	c3.showData();
	c4.showData();
	return 0;
}
