#include<stdio.h>
#define max_size 100
int main(){
	char str[max_size];
	
	printf("Enter your text:");
	gets(str);
	
	strlwr(str);
	
	printf("lowercase of string '%s'",str);
}
