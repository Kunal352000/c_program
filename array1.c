#include<stdio.h>
#define MAX_SIZE 1000
int main(){
	int arr[MAX_SIZE];
	int i,n;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the element in the array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n Elements in array are:");{
		for( i=0; i<n; i++){
			printf("%d \n",arr[i]);
		}
	}
}
