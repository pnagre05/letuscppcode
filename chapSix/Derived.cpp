#include <iostream>
using namespace std;

class Base
{
	protected:
		int i;
	public:
		Base()
		{
			i = 4;
		}
};

class Der : public Base
{
	private:
		int j;
	public:
		Der()
		{
			j = i * 4;
		}
};

int main() 
{
	Der d;
}
