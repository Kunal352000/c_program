#include<stdio.h>
void main(){
	int m1[3][3],m2[3][3],i,j,c[3][3];
	
	printf("Enter elements for 1st matrix:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("Enter elemnts for 2nd matrix:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("  %d ",c[i][j]);
		}
		printf("\n");
	}
}
