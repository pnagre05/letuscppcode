#include <iostream>
using namespace std;

const int MAX = 10;
class Stack 
{
	protected:
		int arr[MAX];
		int top;
	public:
		Stack()
		{
			top = -1;
		}

		void push(int num)
		{
			top++;
			arr[top] = num;
		}
		
		int pop()
		{
			int num;
			num = arr[top];
			top--;
			return num;
		}
};

class NewStack : public Stack
{
	public:
		bool isFull()
		{
			if (top == MAX - 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool isEmpty()
		{
			if (top == -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	NewStack stk;

	if (!stk.isFull())
	{
		stk.push(10);
	}
	else
	{
		cout << "Stack is full" << endl;
	}

	if (!stk.isFull())
	{
		stk.push(20);
	}
	else
	{
		cout << "Stack is full" << endl;
	}

	if (!stk.isFull())
	{
		stk.push(30);
	}
	else
	{
		cout << "Stack is full" << endl;
	}

	int n;
	if (!stk.isEmpty())
	{
		n = stk.pop();
		cout << "Item popped = " << n << endl;
	}
	else
	{
		cout << "Stack is empty" << endl;
	}

	if (!stk.isEmpty())
	{
		n = stk.pop();
		cout << "Item popped = " << n << endl;
	}
	else
	{
		cout << "Stack is empty" << endl;
	}

	if (!stk.isEmpty())
	{
		n = stk.pop();
		cout << "Item popped = " << n << endl;
	}
	else
	{
		cout << "Stack is empty" << endl;
	}

	if (!stk.isEmpty())
	{
		n = stk.pop();
		cout << "Item popped = " << n << endl;
	}
	else
	{
		cout << "Stack is empty" << endl;
	}

}
