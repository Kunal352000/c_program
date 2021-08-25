/*  Function with argument with return type */
#include<stdio.h>
#include<math.h>
int sum(int x,int y); /*fun dec*/
void main(){
int a=10,b=20;
printf("sum=%d\n",sum(a,b));//callie a,b are acutal parameters
}
int sum(int x,int y)//fun defination x,y formal parameters
{
return x+y;
}
