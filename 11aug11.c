#include<stdio.h>
#define print printf
void main(){
char s[5][20]={"hyd","indore","banglore","chennai","mumbai"};
int i;
puts("CITIES ");
puts("---------------------------------------");
for(i=0;i<5;i++)puts(s[i]);
}
