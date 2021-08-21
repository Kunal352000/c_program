#include<stdio.h>
void main(){
	int a[3][3],b[3][3],i,j,c[3][3];
	
	printf("Enter 3*3 matrix one element:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter 3*3 matrix two element:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Adding two matrix:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j]=a[i][j]+b[i][j];
			
		}
		
	}
	printf("\n Both matrix added sucessfully:");
	printf("\n Here is the new matrix:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",c[i][j]);
			printf("\n");
		}
	}
}
