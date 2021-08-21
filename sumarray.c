#include<stdio.h>
void main(){
	int arr[10],i,sum=0;
	
	printf("Enter the elements in the array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Sum of elemnts in the array is :");
	for(i=0; i<10; i++){
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
