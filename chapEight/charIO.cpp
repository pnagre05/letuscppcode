    #include <iostream>
    #include <iomanip>
    #include <fstream>
    using namespace std;


    int main()
    {
        
        char ch;
        ifstream infile("Sample.cpp");
        while (!infile.eof())
        {
            infile.get(ch);
            cout << ch;
        }
        infile.close();
        return 0;

    }
