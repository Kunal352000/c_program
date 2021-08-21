#include<stdio.h>
#define size 3
int main(){
	int A[size][size];
	int B[size][size];
	int C[size][size];
	
	int row,col;
	
	printf("Enter the elements in Array A:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			scanf("%d",&A[row][col]);
		}
	}
	
	printf("Enter the elements in Array B:");
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
	
	printf("\n Sum of two matrix are:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			printf("%d ",C[row][col]);
		}
		printf("\n ");
	}
}
