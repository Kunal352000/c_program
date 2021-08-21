#include<stdio.h>
#define max_size 100
int main(){
	char str1[max_size],str2[max_size];
	
	int i;
	
	printf("Enter your text:");
	gets(str1);
	
	for(i=0; str1[i] != '\0'; i++){
		str2[i]=str1[i];
	}
	
	str2[i]='\0';
	
	printf("original string '%s'\n",str1);
	printf("copied string '%s'",str2);
}
