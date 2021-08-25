/*Array of pointer:
-------------------
Like general variable we can also declare pointer using array.
Due to this program size is reduced.It is useful in dynamic memory allocation.*/
#include<stdio.h>
void main(){
int a=10,b=33,c=9,*p[3],i;
p[0]=&a;
p[1]=&b;
p[2]=&c;
for(i=0;i<3;i++){
	printf("%c =%d\n",97+i,*p[i]);
	}
}
