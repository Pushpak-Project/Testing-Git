// These are imports
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;

int main()
{
    int a = 122543;

    float b = 12.24556346f; // 7 signi digits

    double c = 1247.25248785185135168; // 15 signi digits

    long double d = 457.247456455315648453324L; // 18 signi digits

    // cout gives 6 signi digits
    // Hey this is for test 

    cout<<a<<endl;
    // Displaying the output
    cout<<b<<endl;
    cout<<setprecision(10)<<c<<endl;
    cout<<setprecision(16)<<d<<endl;

    cout<<numeric_limits<float>::digits10<<endl;

}