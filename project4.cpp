#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a,b,c;
cout << "Enter Number Of Days : ";
cin >> a;
b=a/365;
a=a%365;
c=a/7;
a=a%7;
cout << "Years : "<< b << "\nWeeks : "<< c << "\nDays : "<< a;
    return 0;
}
