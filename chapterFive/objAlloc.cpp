#include <iostream>

using namespace std;

class Sample
{
	private:
		int i;
		float a;
	public:
		Sample()
		{
			i = 10;
			a = 3.14f;
		}
		void showData()
		{
			cout << i << endl << a << endl;
		}
		~Sample()
		{
			cout << "Reached destructor" << endl;
		}

};

int main()
{
	Sample* ptr;
	ptr = new Sample();
	ptr->showData();
	delete ptr;

	/*
	* An object created using new exists until it is explicitly destroyed using delete
	* 
	* The delete operator may be applied only to a pointer returned by new or to zero. Applying delete
	* to 0 has no effect. In other words, passing a null pointer to delete is safe
	* 
	* The expression 'delete p' doesn't delete the pointer. It deletes the object being pointed to by p.
	* So ideally, the name of the keyword should have been deletedthethingpointedtoby rather than delete
	* 
	* Never delete a pointer twice - this may corrupt the heap
	* 
	*/
}
