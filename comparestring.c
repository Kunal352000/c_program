#include<stdio.h>
#define max_size 100
int main(){
	char str1[max_size],str2[max_size];
	int str;
	
	printf("Enter your text1:");
	gets(str1);
	
	printf("Enter your text2:");
	gets(str2);
	
	str = strcmp(str1,str2);
	
	if(str==0){
		printf("both string are equal:");
	}
	
	
	else{
		printf("both string are not equal:");
	}
}
