#include<stdio.h>
void main(){
char s[100];
printf("Enter a string: ");
scanf("%[^@#$*]",s);
puts(s);
}
