#include<stdio.h>
void main(){
	int n,fn,ln;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	ln=n%10;
	fn=n;
	while(fn>=10){
		fn=fn/10;
	}
	
	
	printf("\n %d lastnumber",ln);
	printf("\n %d firstnumber",fn);
}
