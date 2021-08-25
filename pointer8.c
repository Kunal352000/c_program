#include<stdio.h>
void main(){
float n=1.20;
int *p=&n;
printf("n=%f",*p);
}
/* GV because pointer can store same type of address only.when diff type of address
is given,it gives garbage or runtime error*/
