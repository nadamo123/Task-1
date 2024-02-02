#include<iostream>
using namespace std;

int main() 
{


cout<<(T && T && F && T)<<"\n";
// && and one F = F


cout<<(T && T && F && T || T && T)<<"\n";
//  T && T && F && T = F
//  F || T = T

cout<<(T && T && T && T || T && (T || F))<<"\n";
 /* (T || F) = T
 T && T && T && T = T
 T && T = T
 T || T ==> T */


cout<<(T && T && T || T && (F || (T && (T && T))))<<"\n";
/*  (T && T) = T
 -T && T && T || T && (F || (T && T))
 (T && T) = T
- T && T && T || T && (F || T)
 (F || T) = T
-T && T && T || T && T
 T && T && T  = T
-T || T && T
 T && T = T
 T || T = T */


cout<<(T && T || T && F && T || T && T && F || (T && (T || F)))<<"\n";
 /*(T || F) =T
 -T && T || T && F && T || T && T && F || (T && T)
 (T && T) = T
 -T && T || T && F && T || T && T && F || T
 T && T = T
 -T || T && F && T || T && T && F || T
 T && F && T = F
 -T || F || T && T && F || T
 T && F && T = F
 -T || F || T && T && F || T
 T && T && F = F
 T || F || F || T ==> T */


cout<<(T && T || T && F && T || T && T && F || (T && (T || F)))<<"\n";
/* (T || F) = T
 -T && T || T && F && T || T && T && F || (T && T)
 (T && T) =T
 -T && T || T && F && T || T && T && F || T
 (T && T) = T
 T || anything = T  */


cout<<(T && T || T && F && T || (T && T && F || (T && (T || F))))<<"\n";
//  T && T || something = T


cout<<((T && T || T && F && T || T) && T && F || (T && (T || F)))<<"\n";
 /*(T && (T || F)) = T
 (T && T || T && F && T || T) 
 (T || F || T) = T
 T && T && F || T = F
 F || T = T */



cout<<(T && T || T && (F && T || T && T) && F || (T && (T || F)))<<"\n";
 /*(T && (T || F)) = T
 (F && T || T && T) =(F || T) = T
 T && T || T && T && F || T = T 
 T || F || T = T */




return 0;
}