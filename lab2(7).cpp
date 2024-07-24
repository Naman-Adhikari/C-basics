// 7. WAP to show the concept of return by reference.
#include <iostream>
using namespace std;
char& name ( char& t)
{
    return t;
}
int main ()
{
    char cr;
    cout<<" Enter A Character : "<<endl;
    cin>>cr;
    cout<<" Entered Character Is : "<<name(cr)<<endl;
    return 0;
}
