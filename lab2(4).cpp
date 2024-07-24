// 4. WAP a program to swap two variables using the concept of pass-by reference.
#include <iostream>
using namespace std;
void swap ( int &x , int&y )
{
    int t;
    t = x;
    x = y;
    y = t; 

}

int main ()
{
    int a , b ;
    cout << " ENter two integers :"<<endl;
    cin>>a>>b;
    cout <<" Before Swap : "<<"a ="<<a<<" b ="<<b<<endl;
    swap(a,b);
    
    cout<<"After Swap : "<< "a = "<<a<<" b ="<<b<<endl;
    return 0;
}