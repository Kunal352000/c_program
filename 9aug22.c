#include<stdio.h>
#define p printf
void main(){
int a[3],i;
a[0]=10;
a[2]=20;p("Elements are: ");for(i=0;i<3;i++);p("%6d",a[i]);
}
