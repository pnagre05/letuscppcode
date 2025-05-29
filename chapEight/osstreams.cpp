    #include <iostream>
    #include <string>;
    #include <sstream>
    using namespace std;


    int main()
    {
        char ch = 'Z';
        int i = 350; 
        float a = 3.1415528f;
        char str[] = "strstreams at work";
        ostringstream s;

        s << "ch = " << ch << endl << "i = " << hex << i << endl << "a = " << fixed << a << endl
            << "str = " << str << ends;

        cout << s.str() << endl;
        return 0;
    }


