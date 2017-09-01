#include <iostream>
#include <cmath>
using namespace std;

int main() {
float p,r,t,i;
cout << "Enter Principle Amount (In Rupees) : ";
cin >> p;
cout << "Enter Rate Of Interest : ";
cin >> r;
cout << "Enter Time (In Years) : ";
cin >> t;
i=p*pow((1+r/100),t);
cout << "Compound Interest Is (In Rupees) : "<< i;


    return 0;
}
