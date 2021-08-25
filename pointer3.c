#include<stdio.h>
void main(){
int a,b,*p=&a,*q=&b;
printf("Enter a,b value: ");
scanf("%d %d",&a,&b);
if(*p>*q)puts("a is big");
else if(*q>*p)puts("b is big");
else puts("both are equal");

}
