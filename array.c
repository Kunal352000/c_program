#include<stdio.h>
void main(){
	int sub[5],i,rollno,total=0;
	
	printf("Enter the Roll number:");
	scanf("%d",&rollno);
	
	printf("Enter marks of five subject:");
	for(i=0; i<=5; i++){
		scanf("%d",&sub[i]);
		total=total+sub[i];
	}
	printf("Total marks is %d",total);
}
