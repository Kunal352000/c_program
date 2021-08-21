#include<stdio.h>
#define print printf
void main(){
char s[100];int i;
print("Enter a string: ");gets(s);
for(i=0;s[i]!='\0';i++){
	
}
print("Length=%d\n",i);
print("Reverse is: ");
for(i--;i>=0;i--)print("%c",s[i]);
}
