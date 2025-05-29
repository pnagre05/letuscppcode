#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ch = 90;
    cout << char(65) << endl; // Prints 'A'
    cout << char(ch) << endl; // Prints 'Z'

    char str[] = "Be silent. Let performance speak!";
    const char* p = "Be eloquent. Express yourself!";

    cout << str << endl;
    cout << p << endl;

    // Safe use of static_cast for non-const char[]
    cout << static_cast<void*>(str) << endl;

    // For const char* p, use intermediate const void* variable (no cast)
    const void* addrP = p;
    cout << addrP << endl;

    return 0;
}
