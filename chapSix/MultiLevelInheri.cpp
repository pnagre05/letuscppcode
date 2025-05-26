#include <iostream>
using namespace std;


class Item
{
private:
string title;
float price;
public:
void getData();
void displayData();
};

class Sales
{
private:
float salesFigure[3];
public:
void getData();
void displayData();
};

class HardwareItem : private Item, private Sales
{
private:
string category;
string oem;
public:
void getData();
void displayData();
};

class SoftwareItem : private Item, private Sales
{
private:
string category;
string os;
public:
void getData();
void displayData();
};

int main() 
{
	
}
