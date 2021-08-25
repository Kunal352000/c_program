/* void or genric pointer:
--------------------------Pointer can store same type of address only.When several
variables are there with different data types,we have to declare several pointer.
it makes program complex.To avoid this problem we are using void or genric pointer.
void pointer can store any type of address.But before going to use void pointer it 
should be type casted.
It takes 2bytes memory and it is very much used in dynamic memory allocation.*/
#include<stdio.h>
void main(){
int a=10;float b=1.2;char c='X';
void *p;
p=&a;
printf("a=%d\n",*(int *)p);/*type casting*/
p=&b;
printf("b=%f\n",*(float *)p);
p=&c;
printf("c=%c",*(char *)p);
}
