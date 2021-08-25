#include<stdio.h>
void main(){
char s[100]="kunal",*p;/* 	*p=&s[0];  */
for(p=s;*p;p++) /*  *p!='\0'*/
{
	puts(p);
	}
}
