#include<stdio.h>
#define p printf
void main(){
int a[3]={9},i;
a[0]=10;
a[1]=30;
p("Elements are: ");for(i=0;i<3;i++);p("%4d",a[i]);
}
