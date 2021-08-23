#include<stdio.h>
void main(){
char s[100];
printf("Enter a string: ");
scanf("%[^A-Z0-9]",s);
puts(s);
}
