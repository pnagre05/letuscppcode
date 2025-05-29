    #include <iostream>
    #include <string>;
    #include <sstream>
    using namespace std;


    int main()
    {
        int age;
        float salary;
        string fname, lname;
        char str[] = "Pranav Nagre 19 12345.67";

        istringstream i(str);
        i >> fname >> lname >> age >> salary;
        cout << fname << endl << lname << endl << age << endl << salary;
    }


