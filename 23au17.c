#include<stdio.h>
void main(){
char s1[10]="ab",s2[10]="ab",s3[10]="cdef";
strcat(s1,s3);
strncat(s2,s3,3);
puts(s1);
puts(s2);
puts("-------------------");
puts(s3);
}
