#include<stdio.h>
void main(){
	int arr[10],i,max,min;
	
	printf("Enter 10 elements in array: ");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	
	for(i=1; i<10; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("Maximum elements of array are %d \n",max);
	printf("Minimum elements of array are %d",min);
}
