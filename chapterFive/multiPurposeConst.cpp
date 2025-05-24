#include <iostream>
using namespace std;

class Sample 
{
	private:
		int data;
	public:
		Sample()
		{
			data = 0;
		}
		void changeData() 
		{
			data = 10;
		}
		void showData() const
		{
			cout << endl << "data = " << data << endl;
		}

		void add(Sample const& s, Sample const& t)
		{
			data = s.data + t.data;
		}

		void getData()
		{
			cin >> data;
		}
};



int main()
{
	Sample s1;
	s1.getData();
	Sample s2;
	s2.changeData();
	Sample s3; 
	s3.changeData();
	Sample s4;
	s4.add(s2, s3);
	s4.showData();
	return 0;
}
