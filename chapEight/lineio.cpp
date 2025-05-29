    #include <iostream>
    #include <string>;
    #include <fstream>
    using namespace std;


    int main()
    {
        string source, target;
        char str[80];

        cout << "Enter source file name: ";
        cin >> source;
        cout << "Enter source file name";
        cin >> target;

        ifstream infile(source);
        ofstream outfile(target);
        while (infile)
        {
            infile.getline(str, 79, '\n');
            outfile << str << endl;
        }
        infile.close();
        return 0;
    }
