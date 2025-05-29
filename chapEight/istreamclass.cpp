#include <iostream>
using namespace std;



int main()
{
	char ch;
	cout  << endl << "Enter a character: ";
	cin.get(ch);
	cout << ch;
	cin.putback(ch);
	cin.get(ch);
	cout << endl << ch;
	int count = cin.gcount();
	cout << endl << "Characters extracted in last get() = " << count;
	//stuff stream with a Z
	cin.putback('Z');
	ch = cin.peek();
	cout << endl << ch;
	//Z is still in stream
	cin.get(ch);
	cout << endl << ch << endl;
	return 0;
}
