#include<stdio.h>
void main(){
	int arr[10],i;
	
	printf("Enter the elements in the array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n array elements in array are:");
	for(i=10; i>=0; i--){
		printf("%d ",arr[i]);
	}
}
