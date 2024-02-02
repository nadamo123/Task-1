#include<iostream>
using namespace std;

int main() {

	int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n";    // T
	cout << (a + b + c >= 2 * d) << "\n";    //F

	cout << (a > 5 || d < 30) << "\n";     // T
	cout << (a > 5 && d < 30) << "\n";    //F
	cout << (a <= b && b <= c) << "\n";   //F

	cout << (a > 5 && d < 30 || c - b == 10) << "\n";    // F
	cout << (a <= b && b <= c && c <= d) << "\n";    //F

	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";   // T 
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";   // F

	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n";   //F
	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";  //F

	return 0;