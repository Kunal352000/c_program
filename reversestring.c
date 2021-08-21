#include<stdio.h>
#define max_size 100
int main(){
	char str[max_size];
	
	printf("Enter your text:");
	gets(str);
	
	printf("Original string '%s' \n",str);
	
	strrev(str);
	
	printf("Reverse string '%s' \n",str);
	
	return 0;
}
