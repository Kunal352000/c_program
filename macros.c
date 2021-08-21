#include<stdio.h>
#define n 10
void main(){
	int arr[n],i;
	
	for(i=0; i<n; i++){
		printf("Enter the elements %d:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array elements are as allows:");
	for(i=0; i<n; i++){
		printf("%d \n",arr[i]);
	}
}
