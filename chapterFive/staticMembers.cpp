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

//static members are declared within the class but defined outside of it
//you need both parts - declaration and definition otherwise there will be a linker error

int Circle::count = 0;

int main() 
{
	Circle c1('R', 1.2f);
	Circle::showCount();
	Circle c2('B', 2.2f);
	Circle::showCount();

	/* 
 	An instance member (like a constructor) can access instance as well as static data members

   	A static member function can access only static data members

    	A this pointer never exists for a static function

     	A static data member has nothing to do with static storage class
 */
}
