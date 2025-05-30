#include <iostream>
using namespace std;

class Example
{
	private:
		int i;
		float j;
	public:
		Example(int ii = 0, float jj = 0.0f)
		{
			i = ii;
			j = jj;
		}

		void showData()
		{
			cout << i << " " << j << endl;
		}

		friend Example operator * (Example, Example);
};

Example operator* (Example k, Example l)
{
	Example temp;
	temp.i = k.i * l.i;
	temp.j = k.i * l.j;
	return temp;
}

int main()
{
	Example e1(10, 3.14f), e2(2, 1.5f), e3, e4, e5;
	e3 = e1 * e2;
	e4 = e1 * 2;
	e3.showData();
	e4.showData();
	//e5 = 2 * e1 (this does not work)
	e5 = e1 * e2 * 2;
	return 0;

}
