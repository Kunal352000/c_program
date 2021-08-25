/*Pointer to pointer/double pointer:
------------------------------------ A pointer which stores the address of another 
pointer is called double pointer or pointer to pointer.They are used to manage dynamic
multi-dimensional array.*/
#include<stdio.h>
void main(){
int a=10,*p=&a,**q=&p,***r=&q;
printf("%d %d %d %d",a,*p,**q,***r);
}
