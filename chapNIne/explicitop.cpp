#include <iostream>
using namespace std;

class Complex
{
	private:
		float real, imag;
	public:
		explicit Complex(float r = 0.0f, float i = 0.0f) // Constructor remains explicit
		{
			real = r;
			imag = i;
		}

		Complex operator + (Complex c)
		{
			Complex t;
			t.real = real + c.real;
			t.imag = imag + c.imag;
			return t;
		}
		void display()
		{
			cout << real << " " << imag << endl;
		}
};

int main()
{
	Complex c1(1.5, 3.5), c2;
	c2 = c1 + Complex(1.25f); // Explicitly creating a Complex object from 1.25f
	c2.display();
	return 0;
}
