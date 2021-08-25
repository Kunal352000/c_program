/* Null pointer:
-----------------When a pointer is initialized with 0 or NULL then it is called 
Null pointer.To avoid bad and dangling pointers we are using NULL pointers.
This one is used in dynamic memory allocation.*/
#include<stdio.h>
void main(){
int *p=0;
printf("p stored addr=%u\n",p);
printf("value in that address=%d",*p);
}
