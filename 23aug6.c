#include<stdio.h>
void main(){
char s[100];
printf("Enter your name: ");
scanf("%[^\n]",s);
puts(s);
}
