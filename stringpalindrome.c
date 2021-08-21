#include<stdio.h>
#define max_size 100
int main(){
	char str1[max_size],str2[max_size];
	
	int s;
	
	printf("Enter your text:");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	s=strcmp(str1,str2);
	
	if(s==0){
		printf("string is palindrome:");
		
	}
	
	else{
		printf("String is not palindrome:");
	}
	
	return 0;
}
