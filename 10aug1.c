#include<stdio.h>
#define p printf
void main(){
int a[100],n,i,temp;
p("Enter elements size in array: ");scanf("%d",&n);
p("Enter %d intergers: ",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n/2;i++){
	int temp=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=temp;
	}
p("Elements in reverse order: ");
for(i=0;i<n;i++){
	p("%4d",a[i]);
	}
}
