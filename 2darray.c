#include<stdio.h>
void main(){
	int arr[2][3],i,j;
	
	printf("Enter the element in the array:");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Matrix of 2*3 is:");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d ",arr[i][j]);
		}
	}
}
