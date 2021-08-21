#include<stdio.h>
#define p printf
void main(){
int a[]={10,20,30};
p("%d\n",sizeof(a));
p("%d\n",sizeof(int));
p("%d\n",sizeof(a[0]));
}
