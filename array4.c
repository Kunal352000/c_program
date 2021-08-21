#include<stdio.h>
#define MAX_SIZE 1000
int main(){
	int arr[MAX_SIZE];
	int i,n,max,min;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements in the array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("%d\n",max);
	printf("%d\n",min);
}
