#include<stdio.h>
#include<string.h>
void main(){
printf("%d\n",stricmp("ab","ab"));
printf("%d\n",stricmp("ab","AB"));
printf("%d\n",stricmp("AB","ab"));
printf("%d\n",stricmp("abc","ab"));
printf("%d\n",stricmp("ab","abc"));
printf("%d",stricmp("a","1"));
}
