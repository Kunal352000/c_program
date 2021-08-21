#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b,c;
	
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	printf("Addition is=%d \n", c);
	
	c=a-b;
	printf("sub is=%d \n", c);

    c=a*b;
    printf("Multificationis=%d \n", c);
    
    c=a/b;
    printf("Division is=%d \n", c);
    
    getch();
}

