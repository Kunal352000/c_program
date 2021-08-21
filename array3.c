#include<stdio.h>
#define MAX_SIZE 1000
int main(){
	int arr[MAX_SIZE];
	int i,n,sum=0;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		sum=sum+arr[i];
	}
	
	printf("%d",sum);
}
