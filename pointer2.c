#include<stdio.h>
void main(){
int n,*p;
p=&n;
printf("Enter a number: ");
scanf("%d",&n);
if(*p>0)puts("positive.");
else if(*p<0)puts("negetive.");
else puts("zero");
}
