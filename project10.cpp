#include <iostream>
using namespace std;

int main() {
float a,b,c,d,e,f,g,h,i,k;
cout << "Enter Marks In Subject 1 : ";
cin >> a;
cout << "Enter Marks In Subject 2 : ";
cin >> b;
cout << "Enter Marks In Subject 3 : ";
cin >> c;
cout << "Enter Marks In Subject 4 : ";
cin >> d;
cout << "Enter Marks In Subject 5 : ";
cin >> e;
cout << "Enter Maximum Marks In Each Subject : ";
cin >> f;
g=a+b+c+d+e;
h=(a+b+c+d+e)/5;
i=5*f;
k=(g/i)*100;

cout << "Total Marks : " << g <<"\n Average Marks : " << h << "\n Percentage : "<< k;


    return 0;
}
