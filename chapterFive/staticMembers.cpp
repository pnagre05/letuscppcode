#include <iostream>
using namespace std;

class Circle
{
	private:
		char color;
		float radius;
		static int count;
	public:
		Circle(char c, float r)
		{
			color = c;
			radius = r;
			count++;
		}
		static void showCount()
		{
			cout << "count = " << count << endl;
		}
};

int Circle::count = 0;

int main() 
{
	Circle c1('R', 1.2f);
	Circle::showCount();
	Circle c2('B', 2.2f);
	Circle::showCount();
}
