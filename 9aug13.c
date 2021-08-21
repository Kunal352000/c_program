#include<stdio.h>
#define p printf
void main(){
int a[3]={0>1,1<0,4000000},i;p("Elements are: ");
for(i=0;i<3;i++)p("%4d",a[i]);
}
