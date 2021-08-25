/*Function without arguments,without return values*/
#include<stdio.h>
void welcome(void);/*function declartion*/
void main(){
welcome();/*function calling*/

void welcome(void)/*function defination*/
	{
		puts("Welcome to functions");
	}
}
