#include <iostream>
using namespace std;

class Integer 
{
	private:
		int i;
	public:
		void getData()
		{
			cout << endl << "Enter any integer";
			cin >> i;
		}

		void setData(int j)
		{
			i = j;
		}

		Integer()
		{

		}
		Integer(int j)
		{
			i = j;
		}
		void displayData()
		{
			cout << endl << "value of i = " << i << endl;
		}
};

int main() 
{
	Integer i1(100), i2, i3;
	i1.displayData();
	i2.setData(200);
	i2.displayData();
	i3.getData();
	i3.displayData();
	return 0;
}
