#include<stdio.h>
#define p printf
void main(){
int a[100],i,n,en=0,od=0,z=0;
p("Enter array size b/w 1 to 100: ");scanf("%d",&n);
p("Enter %d numbers: ",n);for(i=0;i<n;i++){scanf("%d",&a[i]);
	if(a[i]==0)z++; else if(a[i]%2==0)en++; else od++;
		}p("Even=%d,  odd=%d,  zero=%d",en,od,z);
}
