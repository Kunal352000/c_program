/* Dangling pointer:
-------------------- A pointer is declared and later some variable or memory address
also given.After some time that variable or memory deleted.But still the pointer is
pointing/storing the deleted variable or memory address.This kind of pointer is called
dangling pointer.To avoid this dangling pointer we are intializing with NULL.*/
#include<stdio.h>
void main(){
int *p;/* bad pointer */
{
	int a=100;/*local var */
	p=&a;
	printf("a=%d\n",*p);
	printf("a=%d\n",*p);/*dangling pointer*/
	p=NULL;/*NULL pointer*/
	printf("a=%d",*p);
	}
}

