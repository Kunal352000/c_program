#include<stdio.h>
void main(){
	int arr[3][3][3],i,j,k;
	
	printf("Enter the elemnts in the array:");
	for(i+0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	printf("Matrix of 3*3 is");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				printf("%d ",arr[i][j][k]);
			}
		}
	}
}
