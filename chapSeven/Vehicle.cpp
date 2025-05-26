#include <iostream>
using namespace std;

class Vehicle
{
	public:
		virtual void speed()
		{
			cout << endl << "In speed of vehicle";
		}

		virtual void maintenance()
		{
			cout << endl << "In maintenance of vehicle" << endl;
		}

		void value()
		{
			cout << endl << "Value of vehicle";
		}
};

class FourWheeler : public Vehicle
{
	public:
		void speed()
		{
			cout << endl << "In speed of FourWheeler";
		}

		void maintenance()
		{
			cout << endl << "In maintenance of FourWheeler" << endl;
		}

};

class TwoWheeler : public Vehicle
{
public:
	void speed()
	{
		cout << endl << "In speed of TwoWheeler";
	}

	void maintenance()
	{
		cout << endl << "In maintenance of TwoWheeler" << endl;
	}

	void value()
	{
		cout << endl << "Value of TwoWheeler";
	}

};

class AirBorne : public Vehicle
{
	public:
		void speed()
		{
			cout << endl << "Airborne speed";
		}
};

int main() 
{
	Vehicle* ptr1;
	Vehicle v;

	ptr1 = &v;
	ptr1->speed();
	ptr1->maintenance();
	ptr1->value();

	Vehicle* ptr2, * ptr3, * ptr4;

	FourWheeler truckOne;
	TwoWheeler truckTwo;
	AirBorne plane;

	ptr2 = &truckOne;
	ptr3 = &truckTwo;
	ptr4 = &plane;

	ptr2->speed();
	ptr2->maintenance();

	ptr3->speed();
	ptr3->maintenance();

	ptr4->speed();
	ptr4->maintenance();

	ptr2->value();
	ptr3->value();

	Vehicle w;
	w.speed();

	FourWheeler f;
	f.speed();
	
	AirBorne a;
	a.maintenance();
	return 0;


}
