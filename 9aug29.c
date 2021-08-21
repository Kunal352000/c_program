#include<stdio.h>
#define p printf
void main(){
float a[100],s=0;int i,n;
p("Enter array size b/w 1-100: ");scanf("%d",&n);p("Enter %d numbers: ",n);
for(i=0;i<n;i++){
	scanf("%f",a[i]);
	s=s+a[i];
	}
p("Elements sum=%.2f","mean=%.2f",s,s/n);
}
