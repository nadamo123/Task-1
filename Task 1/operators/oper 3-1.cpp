#include<iostream>
using namespace std;

int main() {

	double x, y, z, a, b;
	cin >> x >> y >> z >> a >> b;

	double avg1 = (x+y+z+a+b) / 5.0;	// A
	double sum1 = (x+y+z) / (a+b);		// B
	
	double first3_avg = (x+y+z) / 3.0;
	double last2_avg = (a+b) / 2.0;
	double avg2 = first3_avg / last2_avg;	// C

	cout<<avg1<<"\n";
	cout<<sum1<<"\n";
	cout<<avg2<<"\n";

	cout<<sum1 * 2.0/3.0<<"\n";		// C = 2/3 B

	return 0;
}
