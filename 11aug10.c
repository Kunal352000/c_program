#include<stdio.h>
#define print printf
void main(){
char s[100];
print("Enter a string: ");
scanf("%[A-Z0-9]",s);/* reads only the capital letters and digits*/
puts(s);
}
