#include<stdio.h>
void main(){
	int arr[10],i;
	
	printf("Enter 10 elemnts in an array:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Negative elements are:");
	
	for(i=0; i<10; i++){
		if(arr[i]<0){
			printf("%d \n",arr[i]);
		}
	}
}
