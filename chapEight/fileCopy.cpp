    #include <iostream>
    #include <iomanip>
    #include <fstream>
    using namespace std;


    int main()
    {
        
        char ch;
        string source, target;
        cout << "Enter source file name: ";
        cin >> source;
        cout << "Enter source file name: ";
        cin >> target;

        ifstream infile(source);
        ofstream outfile(target);

        while (infile)
        {
            infile.get(ch);
            outfile.put(ch);
        }
        return 0;
    }
