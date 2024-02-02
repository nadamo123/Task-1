#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	cout << (n / 1000) % 10 << "\n";

// /1000 => removes last 3 digits
	// %10 get next digit = 4th

	return 0;
}