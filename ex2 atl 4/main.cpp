#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Date {
public:
    int year, month, day, hour, minut;


    Date(int d, int m, int y, int h, int mn) {
        year = y;  month = m;   day = d; hour = h;  mn = minut;
    }

    Date(string all) {

        day = stoi(all.substr(0, 2));
        month = stoi(all.substr(2, 2));
        year = stoi(all.substr(4, 4));
        hour = stoi(all.substr(8, 2));
        minut = stoi(all.substr(10, 2));

    }

    int getYear() {
        return year;
    }

    int getMonth() {
        return month;
    }

    int getDay() {
        return day;
    }

    int getTime() {
        return hour, minut;
    }

    void Afficher() {
        cout << day << "/" << month << "/" << year << " à " << hour << ":" << minut;
    }

};


int main()
{
    Date dd("010920091123");


    dd.Afficher();

    return 0;
}



/*
-----------------------------------------------------------------
    convert strings to int :
    stoi(A_String);
----------------------------------------------------------------
    convert int to string :
    to_string(An_Int);
*/
