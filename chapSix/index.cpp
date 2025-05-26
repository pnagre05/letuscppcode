#include <iostream>
#include <string>   // Required for std::to_string
#include <cstring>  // Required for strcpy and strlen
#include <cstdlib>  // Required for atoi
using namespace std;

class String
{
private:
    char str[20];
public:
    // Default constructor
    String()
    {
        str[0] = '\0';
    }

    // Constructor from a C-style string literal
    String(char* s)
    {
        strcpy(str, s);
    }

    // Constructor from an integer, using the std::to_string method
    String(int a)
    {
        // 1. Convert the integer 'a' to a modern C++ std::string
        std::string temp_str = std::to_string(a);

        // 2. Copy the content of the std::string into our internal char array.
        //    .c_str() returns a C-style string representation.
        strcpy(str, temp_str.c_str());
    }

    // Conversion operator to convert a String object back to an int
    operator int()
    {
        // atoi (ASCII to Integer) is the standard library function for this.
        return atoi(str);
    }

    // Display function
    void displayData()
    {
        cout << str << endl;
    }
};

int main()
{
    // --- Part 1: Conversion between built-in data types ---
    cout << "--- Built-in Type Conversions ---" << endl;
    float a = 30;
    double b = 1.44f;
    int c = int(3.14);
    float d = float(5.31);
    cout << "float a = " << a << endl << "double b = " << b << endl;
    cout << "int c = " << c << endl << "float d = " << d << endl;
    cout << endl;

    // --- Part 2: Conversion from built-in (int) to user-defined (String) ---
    cout << "--- Built-in to User-Defined ---" << endl;
    // This calls String(123)
    String s1 = 123;
    cout << "s1 = ";
    s1.displayData();

    // This creates a temporary String(150) and assigns it to s1
    s1 = 150;
    cout << "s1 = ";
    s1.displayData();
    cout << endl;

    // --- Part 3: Conversion from user-defined (String) to built-in (int) ---
    cout << "--- User-Defined to Built-in ---" << endl;
    String s2("123");
    // This explicitly calls the 'operator int()' conversion
    int i = int(s2);
    cout << "i from int(s2) = " << i << endl;

    String s3("456");
    // This implicitly calls the 'operator int()' conversion
    i = s3;
    cout << "i from s3 = " << i << endl;

    return 0;
}
