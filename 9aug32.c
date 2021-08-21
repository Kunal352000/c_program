#include<stdio.h>
#define p printf
void main(){
long a[100];int i,n,c;
p("Enter array size b/w 1-100 ");scanf("%d",&n);
p("Enter %d numbers ",n);for(i=0;i<n;i++)scanf("%ld",&a[i]);
for(i=0;i<n;i++){
	p("No of digits in: ");
	c=p("%ld",a[i]);
	if(a[i]<0)c--;
	p("=%d\n",c);
}
}
