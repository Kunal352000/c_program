#include<stdio.h>
#define p printf
void main(){
int a[2]={10,20},i;
a[2]=30;
p("Elements are: ");for(i=0;i<3;i++)p("%6d",a[i]);
}
