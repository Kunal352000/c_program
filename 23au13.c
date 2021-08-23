#include<stdio.h>
void main(){
char s1[100],s2[100],s3[200];
int i,j;
printf("Enter first name: ");
gets(s1);
printf("Enter last name: ");
gets(s2);
for(i=0;s1[i]!='\0';i++){
	s3[i]=s1[i];
		}
s3[i]=' ';
for(i++,j=0;s2[j]!='\0';j++){
	s3[i+j]=s2[j];
		}
s3[i+j]='\0';
printf("Enter your name is %s: ",s3);
}
