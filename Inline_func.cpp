// 5. WAP to find the square of a number using the inline function.
#include <iostream>
using namespace std ;
inline int sq(int a)
{
    return a*a;
}
int main()
{
    int a ;
    cout<<" Enter A Number :"<<endl;
    cin>>a;
    cout<<" Square of "<<a<<" Is :"<<sq(a)<<endl;
    return 0;
}