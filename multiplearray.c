#include<stdio.h>
#define size 3
int main(){
	int A[size][size];
	int B[size][size];
	int C[size][size];
	
	int row,col,i,sum=0;
	
	printf("Enter elements in array 1:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			scanf("%d",&A[row][col]);
		}
	}
	
	printf("Enter elements in array 2:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			scanf("%d",&B[row][col]);
		}
	}
	
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			for(i=0; i<size; i++){
				sum=sum+(A[row][i]*B[i][col]);
			}
			C[row][col]=sum;
		}
	}
	
	
	printf("\n products of A and B are:");
	for(row=0; row<size; row++){
		for(col=0; col<size; col++){
			printf("%d ",C[row][col]);
		}
	}
}
