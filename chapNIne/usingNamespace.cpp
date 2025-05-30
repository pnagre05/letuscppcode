#include <iostream>
#include <string>
using namespace std;

namespace mine
{
	class MyClass
	{
		private:
			int yr;
		public:
			void changeYear();
	};
	class YourClass;
	void fun1();
}

void mine::MyClass::changeYear()
{
	yr = 2000;
	cout << "Years dont change";
}

class mine::YourClass
{
	public:
		YourClass();
		void show();
};

mine::YourClass::YourClass()
{
	cout << "Reached YourClass' 0 arg ctor";
}

void mine::YourClass::show()
{
	cout << "Do it. Then don't think about it" << endl;
}

void mine::fun1()
{
	cout << "Be impulsive. Exercise Caution" << endl;
}

int main()
{
	mine::MyClass m;
	m.changeYear();
	mine::fun1();
	mine::YourClass y;
	y.show();
	return 0;

}
