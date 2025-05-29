#include <iostream>
#include <iomanip>

using namespace std;

// Custom manipulator for adding a tab
ostream& tab(ostream& o)
{
    return o << "\t";
}

// Roman numeral class
class roman
{
private:
    unsigned long num;  // Number to convert to Roman
public:
    roman(unsigned long n);  // Constructor
    friend ostream& operator << (ostream& o, const roman& r);  // Overloaded << operator
};

// Constructor initializes the number
roman::roman(unsigned long n)
{
    num = n;
}

// Overloaded << operator to output Roman numeral
ostream& operator << (ostream& o, const roman& r)
{
    // Roman numeral symbols and their values, including subtractive notations
    struct key
    {
        const char* ch;  // Roman numeral symbol
        int val;         // Corresponding integer value
    };

    // Ordered from highest to lowest for correct Roman numeral formatting
    key z[] = {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
        {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
        {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
    };

    unsigned long num_copy = r.num;  // Make a copy to avoid modifying the original object
    int sz = sizeof(z) / sizeof(z[0]);  // Total number of Roman numeral mappings

    // Loop through each symbol
    for (int i = 0; i < sz; i++)
    {
        // While current value can still be subtracted
        while (num_copy >= z[i].val)
        {
            o << z[i].ch;       // Output the Roman numeral symbol
            num_copy -= z[i].val;  // Subtract its value from the remaining number
        }
    }

    return o;  // Return the stream object
}

int main()
{
    long yr = 2019;
    cout << roman(yr) << endl;     // Outputs: MMXIX
    cout << roman(1752) << endl;   // Outputs: MDCCLII
    return 0;
}
