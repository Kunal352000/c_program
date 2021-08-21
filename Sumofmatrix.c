#include<stdio.h>
#define size 3
int main(){
	int A[size][size];
	int B[size][size];
	int C[size][size];
	
	int row,col;
	
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
	
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			C[row][col]=A[row][col]+B[row][col];
		}
	}
	
	printf("Sum of matrix A+B=\n");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			printf("%d ",C[row][col]);
		}
		
		printf("\n");
	}
}
