#include <iostream>
using namespace std;
int a, b;
int max(int a, int b);

int main() {
	

	cout << "Enter your first number: ";
	cin >> a;

	cout << "Enter your second number: ";
	cin >> b;
	
	cout << endl;

	max(a, b);

	
}

int max(int x, int y) {
	if (x > y) {
		cout << x << " is larger than " << y << endl;
		return x;
	} else if(x < y) {
		cout << y << " is larger than " << x << endl;
		return y;
	} else {
		cout << x << " is equal to " << y << endl;
		return x;
	}
}