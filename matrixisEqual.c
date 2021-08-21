#include<stdio.h>
#define size 3
int main(){
	int A[size][size];
	int B[size][size];
	
	int row,col,isEqual;
	
	printf("Enter elements in array A:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			scanf("%d",&A[row][col]);
		}
	}
	
	printf("Enter elements in array B:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			scanf("%d",&B[row][col]);
		}
	}
	
	isEqual=1;
	
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			if(A[row][col]!=B[row][col]){
				isEqual=0;
				break;
			}
		}
	}
	
	if(isEqual==1){
		printf("Matrix is equal:");
	}
	
	else{
		printf("Matrix is not equal:");
	}
}
