#include<stdio.h>
#include<string.h>
void main(){
char s1[50],s2[50];
printf("Enter a string: ");
gets(s1);
strcpy(s2,s1);
strrev(s2);
if(stricmp(s1,s2)==0){
	puts("palindrome");
	}
else{
	puts("Not palindrome");
}
}
