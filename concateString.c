#include<stdio.h>
#define max_size 100
int main(){
	char str1[max_size],str2[max_size];
	int i=0,j=0;
	
	printf("Enter your text1:");
	gets(str1);
	
	printf("Enter your text2:");
	gets(str2);
	
	while(str1[i] != '\0'){
		i++;
	}
	
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}
	
	str1[i] != '\0';
	
	printf("'%s'",  str1);
}
