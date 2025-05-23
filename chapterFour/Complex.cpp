#include <iostream>
using namespace std;

class Complex
{
	private: 
		float real, imag;
	public:
		Complex()
		{

		}

		Complex(float r, float i)
		{
			real = r;
			imag = i;
		}

		void displayData()
		{
			cout << "real = " << real << " imaginary = " << imag << endl;
		}

		void addComplex(Complex x, Complex y)
		{
			real = x.real + y.real;
			imag = x.imag + y.imag;
		}

		Complex addComplex(Complex y)
		{
			Complex t;
			t.real = real + y.real;
			t.imag = imag + y.imag;
			return t;
		}

		Complex operator + (Complex y)
		{
			Complex t;
			t.real = real + y.real;
			t.imag = imag + y.imag;
			return t;
		}
};

int main()
{
	Complex c1(1.1f, 2.2f), c2(3.5f, 4.4f), c3, c4, c5;

	c3.addComplex(c1, c2);
	c3.displayData();

	c4 = c1.addComplex(c2);
	c4.displayData();

	c5 = c1 + c2;
	c5.displayData();

	return 0;
}
