// 1. Write a program to find the volume of 3D shapes (cube, cuboid, and cylinder) using function overloading.
#include <iostream>
using namespace std;
int volume ( int a ){
    return a*a*a;
}
int volume ( int a , int b , int c ){
    return a*b*c;
}
float volume ( int a , int r){
    return 3.14*a*a*r;
}

int main() {
    int a , b , c , r ;
    cout << " Enter Length , Breadth , Height & Radius "<<endl;
    cin>>a>>b>>c>>r;
    cout << " Volume Of "<<endl;
    cout <<"Cube :" << volume (a)<<endl;
    cout <<"Cylinder : " << volume (a,r)<<endl;
    cout <<"Cuboid : " << volume (a,b,c)<<endl;
    return 0;
}