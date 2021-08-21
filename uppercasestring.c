#include<stdio.h>
#define max_size 100
int main(){
	char str[max_size];
	
	printf("Enter your text:");
	gets(str);
	
	strupr(str);
	
	printf("uppercase '%s'",str);
	return 0;
}
