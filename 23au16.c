#include<stdio.h>
#include<string.h>
void main(){
char s1[10]="kunal",s2[10],s3[10];
strcpy(s2,s1);
strncpy(s3,s1,2);
s3[2]='\0';
puts(s1);
puts(s2);
puts(s3);
}
