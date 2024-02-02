#include<iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	// using %2
	bool is_even1 = (num % 2 == 0);

	// using /2
	double by2 = (double) num / 2.0;
	by2 = by2 - (int) by2;
	bool is_even2 = by2 == 0;

	//  using %10
	int last_digit = num % 10;	
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	return 0;
}