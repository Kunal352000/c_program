#include<stdio.h>
#define print printf
#define input scanf
#define or ||
#define : {}
void main():
	int a[10],i,n,ele,pos;
	print("Enter array size b/w 1-10: ");input("%d",&n);
	print("Enter %d integers:",n);
	for(i=0;i<n;i++)input("%d",&a[i]);
	print("Enter new element and position");input("%d %d",&ele,&pos);
	if(pos<1||pos>n+1)print("position 1 to %d Only",n+1);
else:
	for(i=n;i>=pos;i--) a[i]=a[i-1];
	a[i]=ele;
	print("Elements are ");
	for(i=0;i<=n;i++)print("%4d",a[i]);
:
:
