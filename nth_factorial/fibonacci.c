#include<stdio.h>
#include<stdlib.h>
 int main()
 {
 unsigned long long int N;
 scanf("%llu",&N);
 unsigned long long int fir=0;
 unsigned long long int sec=1;
 unsigned long long int c;
 for(unsigned long long int i=2;i<=N;i++)
 {
     c=fir+sec;
     fir=sec;
     sec=c;
 }
     printf("%llu",sec);
     return 0;
 }
