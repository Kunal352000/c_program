#include<stdio.h>
void main(){
int n,*p=&n;long f=1;
printf("Enter n value: ");scanf("%d",&n);
while(*p>1){
f=f * *p;
--(*p);
}
printf("Facttorial=%ld",f);
}
