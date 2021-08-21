#include<stdio.h>
void main(){
	int arr[10],i;
	
	printf("Enter the element in the array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<10; i++){
		printf("%d ",arr[i]);
	}
}
