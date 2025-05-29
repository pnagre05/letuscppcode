    #include <iostream>
    #include <string>;
    #include <fstream>
    using namespace std;


    int main()
    {
        struct Employee
        {
            string name;
            int age;
            float basic, gross;
        };
        Employee e;
        char ch = 'Y';

        ofstream outfile;
        outfile.open("EMPLOYEE.DAT", ios::out | ios::binary);

        while (ch == 'Y' || ch == 'y')
        {
            cout << endl << "Enter Name, Age, Basic Sal, Gross Sal: " << endl;
            cin >> e.name >> e.age >> e.basic >> e.gross;
            outfile.write(reinterpret_cast<const char*>(&e), sizeof(e));
            cout << "Add another (Y/N)";
            cin >> ch;
        }
        outfile.close();
        ifstream infile;
        infile.open("EMPLOYEE.DAT", ios::in | ios::binary);
        while (infile.read(reinterpret_cast<char*>(&e), sizeof(e)))
        {
            cout << e.name << '\t' << e.age << '\t' << e.basic << '\t' << e.gross << '\t' << endl;
        }
    }
