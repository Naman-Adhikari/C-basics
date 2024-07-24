// 8. WAP to display respective days using the concept of enumeration.
#include <iostream>
using namespace std;
enum dayname { sun, mon, tue, wed, thr, fri, sat };
int main() {
    dayname today = sun;
    dayname tomorrow = tue;

    switch (today) {
        case sun: cout << "Sunday" << endl; break;
        case mon: cout << "Monday" << endl; break;
        case tue: cout << "Tuesday" << endl; break;
        case wed: cout << "Wednesday" << endl; break;
        case thr: cout << "Thursday" << endl; break;
        case fri: cout << "Friday" << endl; break;
        case sat: cout << "Saturday" << endl; break;
        default: cout << "Invalid day" << endl; break;
    }

    return 0;
}
// break pachi sada ; not :
// enum is just like array it starts fron 0 
// so the value assigned to sun is 0 & sat is 6