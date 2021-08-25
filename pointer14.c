/* Like general variables we can also perform the operaions like +,-,++,and - on 
pointer.But we cant perform *,%,/ on pointers. 

Bad/wild pointer:
----------------- A pointer is declared but not initialized.In this situation the 
pointer the pointer is storing unknown address and value in that address.This kind
of pointer is called bad/wild pointer.
*/
#include<stdio.h>
void main(){
int *p;/* bad/wild pointer */
printf("p stored address=%u\n",p);
printf("value in that address=%d",*p);
}

