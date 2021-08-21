#include<stdio.h>
#define print printf
void main(){
int s[100];
print("Enter your string: ");
scanf("%[^@#$*]",s);
puts(s);
}
