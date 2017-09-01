#include <iostream>
using namespace std;

int main() {

	float a,b;
	cout << "Enter Temperature In Fahrenheit : ";
	cin >> a;
	b=(a-32)*5/9;
	cout << "Required Temperature In Celsius : " << b;

	return 0;
}
