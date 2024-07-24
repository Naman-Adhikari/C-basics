// 9. WAP to dynamically allocate memory using new and delete.
#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char name[100];
    cout << "Enter Your Name: " << endl;
    cin >> name;
    char* cpyname = new char[strlen(name) + 1];
    strcpy(cpyname, name);
    cout << "Copied Name Using DMA : " << cpyname << endl;
    delete[] cpyname;

    return 0;
}
// strings.h == cstring 
// ok code run bhako bela memory dine ra code run bhakai bela hataidine simply