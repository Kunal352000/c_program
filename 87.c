#include<stdio.h>
void main(){
	int arr[5],i,sum=0;
	
	printf("Elements in array are 5:");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Sum of elemnsts are:");
	for(i=0; i<5; i++){
		sum=sum+arr[i];
	}
	
	printf("%d",sum);
	
	
}
