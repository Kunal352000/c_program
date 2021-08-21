#include<stdio.h>
#define max_size 100
int main(){
	char str[max_size];
	int i,count=0;
	
	printf("Enter your text:");
	gets(str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		count++;
	}
	
	printf("Length of string '%s' = %d ",str,count);
	
	return 0;
	
	}
