#include<stdio.h>
#define MAX_SIZE 1000
int main(){
	
	int arr[MAX_SIZE];
	int i,n;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter elements in array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n Negative elements in array are:");
	for(i=0; i<n; i++){
		if(arr[i]<0){
			printf("%d\n",arr[i]);
		}
	}
	
}
