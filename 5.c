#include<stdio.h>
#include<conio.h>
int main(){
	
	int length,width,p;
	
	printf("Enter the length");
	scanf("%d", &length);
	
	printf("Emter the width");
	scanf("%d", &width);
	
	p= 2 * (length+width);
	
	printf("Perimter of rectangle is=%d", p);
	
}
