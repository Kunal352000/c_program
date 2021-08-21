#include<stdio.h>
#include<conio.h>
int main(){
	
	float p,r,t,CI;
	
	printf("Enter the principle,rate,time:");
	scanf("%f%f%f", &p,&r,&t);
	
	CI = p*(pow((1 + r/ 100),t));
	
	printf("Compund interest is =%f", CI);
}
