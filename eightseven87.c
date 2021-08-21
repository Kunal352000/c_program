#include<stdio.h>
void main(){
	int n,rev,remainder,palindrome,n1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	n1=n;
	while(n>0){
		remainder=n%10;
		rev=(rev*10)+remainder;
		n=n/10;
	}
	
	if(rev==n1){
		printf("palindrome:");
	}
		else{
			printf("not palindrome");
		}
	}

