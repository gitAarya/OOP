#include <iostream>
using namespace std;

class Time {
private:
    int hr;   // Hours
    int min;  // Minutes

public:
    // Function to get data from user
    void getdata() {
        cout << "<---- Enter the hours and minutes --->" << endl;
        cin >> hr >> min;
    }

    // Overload the < operator to compare two time objects
    int operator<(const Time& t) {
        int ft, st;
        ft = hr * 60 + min;           // Convert first time to minutes
        st = t.hr * 60 + t.min;       // Convert second time to minutes
        return ft < st;               // Return 1 if ft is less than st, otherwise 0
    }
};

int main() {
    Time t1, t2;

    t1.getdata();  // Get data for the first time object
    t2.getdata();  // Get data for the second time object

    // Compare the two time objects using the overloaded < operator
    if (t1 < t2) {
        cout << "t1 is less than t2" << endl;
    } else {
        cout << "t2 is less than t1" << endl;
    }

    return 0;
}
