#include<stdio.h>
#define p printf
void main(){
int a[3],i;p("Enter elements: ");
for(i=0;i<3;i++){
	scanf("%d",&a[i]);
	}
for(i=0;i<3;i++){
	p("a[%d] cell value=%d and addr=%u\n",i,a[i],&a[i]);
	}
}
