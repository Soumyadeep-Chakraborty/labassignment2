#include <iostream>
using namespace std;

int main() {
float p,r,t,i;
cout << "Enter Principle Value (In Rupees) : ";
cin >> p;
cout << "Enter Rate : ";
cin >> r;
cout << "Enter Time (In Years) : ";
cin >> t;
i=(p*r*t)/100;
cout << "Simple Interest Is (In Rupees) = " << i;



    return 0;
}
