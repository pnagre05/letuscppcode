#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

template<class T>
class Stack
{
private:
	T stk[MAX];
	int top;
public:
	Stack() : top(-1) {}

	void push(T data)
	{
		if (top == MAX - 1)
		{
			cout << "Stack is full" << endl;
		}
		else
		{
			top++;
			stk[top] = data;
		}
	}

	T pop()
	{
		if (top == -1)
		{
			cout << "Stack is empty" << endl;
			return T(); 
		}
		else
		{
			T data = stk[top];
			top--;
			return data;
		}
	}
};

class Complex
{
private:
	float real, imag;
public:
	Complex(float r = 0.0f, float i = 0.0f) : real(r), imag(i) {}

	friend ostream& operator << (ostream& o, const Complex& c);
};

ostream& operator << (ostream& o, const Complex& c)
{
	o << "(" << c.real << "," << c.imag << ")";
	return o;
}

int main()
{

	Stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);

	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;


	Stack<float> s2;
	s2.push(3.14f);
	s2.push(6.28f);
	s2.push(8.98f);

	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;


	Complex c1(1.5f, 2.5f), c2(3.5f, 4.5f), c3(1.2f, 0.6f);
	Stack<Complex> s3;
	s3.push(c1);
	s3.push(c2);
	s3.push(c3);

	cout << s3.pop() << endl;
	cout << s3.pop() << endl;
	cout << s3.pop() << endl;

	return 0;
}
