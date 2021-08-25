#include<stdio.h>
void main(){
int n=10;
float *p=&n;
printf("n=%d",*p);
}

/*error because pointer can store same type of address only.When differnet type 
address is given ,it gives garbage or runtime error*/
