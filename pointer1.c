#include<stdio.h>
void main(){
int a=100,*p=&a;
printf("a value =%d\n",a);
printf("a value =%u\n",&a);
printf("p value=%u\n",p);
printf("a value through p=%d\n",*p);
*p=200;
printf("a=%d, *p=%d\n",a,*p);
a=300;
printf("a=%d, *p=%d",a,*p);
}
