#include<stdio.h>
void main(){
	int arr[10],i;
	
	printf("Enter the element in the array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Negative elements in the array:");
	for(i=0; i<10; i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
}
