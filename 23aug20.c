#include<string.h>
#include<stdio.h>
void main(){
char s[10]="abcdef";
printf("String addr=%u\n",s);
printf("cd address is %u\n",strstr(s,"cd"));
printf("%s\n",strstr(s,"cd"));
printf("%s\n",string(s,"CD"));
printf("c is %d char",strstr(s,"c")-s+1);
}
