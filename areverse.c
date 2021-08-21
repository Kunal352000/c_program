#include<stdio.h>
#define n 9
void main(){
	int a[n],i;
	
	for(i=0; i<9; i++){
		printf("Enter the input for index %d:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n array elements in reverse:");
	for(i=9; i>=0; i--){
		printf("%d  ",a[i]);
	}
}
