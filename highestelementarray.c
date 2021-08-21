#include<stdio.h>
void main(){
	int arr[10],i,high=0;
	
	printf("Enter the element in array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<10; i++){
		if(high<arr[i]){
			high=arr[i];
		}
	}
	printf("Highest element is %d :",high);
	
}
