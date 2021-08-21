#include<stdio.h>
void main(){
	int arr[10],i;
	
	printf("10 elments in array are:");
	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n negative elements in array:");
	for(i=0; i<10; i++){
		if(arr[i]<0){
			printf("%d",arr[i]);
		}
	}
}
