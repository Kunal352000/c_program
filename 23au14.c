#include<stdio.h>
void main(){
char s1[100],s2[100];int i,j,p=1;
printf("Enter string: ");gets(s1);
for(i=0;s1[i]!='\0';i++){
					}
for(i--,j=0;i>=0;i--,j++){
	s2[j]=s1[i];
		}
s2[j]='\0';
for(i=0;s1[i]!='\0';i++){
if(tolower(s1[i])!=tolower(s2[i])){
	p=0;
	break;
	}
	}
if(p==1)puts("palindrome");
else puts("Not palindrome");
}
