#include<iostream>
using namespace std;

int main()
{
string name1;
cout<<"enter your name pleas: ";
cin>> name1;

string id1;
cout<<"enter your id pleas: ";
cin>> id1;

double grade1;
cout<<"exam grade is: ";
cin>> grade1;

string name2;
cout<<"enter your name pleas: ";
cin>> name2;

string id2;
cout<<"enter your id pleas: ";
cin>> id2;

double grade2;
cout<<"exam grade is: ";
cin>> grade2;

cout<<"\nstudents grade in math\n";

cout<< name1 <<"id: "<< id1 <<"grade: "<< grade1 <<"\n"; 
cout<< name2 <<"id: "<< id2 <<"grade: "<< grade2 <<"\n"; 
cout<<"Average grades in math is " <<(grade1 + grade2)/ 2.0 << "\n";

    return 0;
}