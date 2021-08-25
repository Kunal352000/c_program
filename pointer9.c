/* Any type of pointer it stores the address only and address is always unsigned int.
Due to this pointer takes 2 bytes in 16-bit compiler and 4bytes in 32 bit compiler*/
#include<stdio.h>
void main(){
int *a;float *b;char*c;
printf("%d %d %d",sizeof(a),sizeof(b),sizeof(c));
}
