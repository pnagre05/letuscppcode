        #include <iostream>
        #include <string>;
        #include <sstream>
        using namespace std;

        class Carb
        {
            private:
                char type;
                float cost;
                string mfr;
            public:
                void setData(char t, float c, string m)
                {
                    type = t;
                    cost = c;
                    mfr = m;
                }

                void displayData()
                {
                    cout << type << endl << cost << endl << mfr << endl;
                }
        };

        class Car
        {
            private:
                string model;
                string drivetype;
                Carb cc; 
            public:
                void setData(char t, float c, string mf, string m, string d)
                {
                    model = m;
                    drivetype = d;
                    cc.setData(t, c, mf);
                }

                void displayData()
                {
                    cout << model << endl << drivetype << endl;
                    cc.displayData();
                }
        };

        int main()
        {
            Car mycar;
            mycar.setData('A', 1234.34, "model", "type", "four wheel");
            mycar.displayData();
            return 0;
        }


