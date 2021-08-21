#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int arr1[MAX_SIZE],arr2[MAX_SIZE];
	int i,n;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements in the array1:");
	for(i=0; i<n; i++){
		scanf("%d ",&arr1[i]);
	}
	
	for(i=0; i<n; i++){
		
		arr2[i]=arr1[i];
	}
	
	printf("\n Elements in array1 are:");
	for(i=0; i<n; i++){
		printf("%d ",arr1[i]);
	}
	
	printf("\n Elements in array2 are:");
	for(i=0; i<n; i++){
		printf("%d ",arr2[i]);
	}
	
	return 0;
}
