// 10. WAP with structure named student with name and roll number as a member. Your program should contain a function to display the name and roll number a structure variable.
#include <iostream>
using namespace std;
struct student {
    int rollno;
    char name[400];
};
void displayStudent(const student& s) {
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollno << endl;
}
int main() {
    student student1;
    cout << "Enter student's name: ";
    cin >> student1.name ;
    cout << "Enter student's roll number: ";
    cin >> student1.rollno;
    displayStudent(student1);
    return 0;
}
// fx ma structre pass gard yaad rakhne k ??
// fxname( structure_name);
// display garda kasari ??
// s.abajchahiekoho 