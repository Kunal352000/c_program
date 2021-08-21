#include<stdio.h>
#define print printf
void main(){
char s[100];
print("Enter a string: ");
scanf("%[^\n]",s);/*upto pressing enter key*/
puts(s);
}
