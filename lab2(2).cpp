/** 3. WAP to find the simple interest with P = 10000 T = 5 and R = 10% as default arguments. Call the function with
a. no arguments
b. With P = 20000 T = 6 and R = 6%
c. With P = 30000 only and observe the mechanism. **/
#include <iostream>
using namespace std;

int simpleinterest(int p = 10000, int t = 5, int r = 10) {
    return (p * t * r) / 100;
}
int main() {
    int p, t, r;
    cout << "Enter P T R: " << endl;
    cin >> p >> t >> r;
    cout << "Simple Interest: " << endl;
    cout << "CASE I; No Argument: " << simpleinterest() << endl;
    cout << "CASE II; With P = 20000, T = 6, and R = 6%: " << simpleinterest(20000, 6, 6) << endl;
    cout << "CASE III; With P = 30000 only: " << simpleinterest(30000, t, r) << endl;
    return 0;
}