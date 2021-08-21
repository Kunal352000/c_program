#include<stdio.h>
#define p printf
void main(){
int a[3]={1.1,2.2,3.3},i;p("Elements are: ");
for(i=0;i<3;i++)p("%4d",a[i]);
}
