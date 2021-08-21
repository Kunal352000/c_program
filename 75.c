#include<stdio.h>
void main(){
	int i,n;
	
	printf("Print odd numbers upto 100:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		if(i%2 != 0){
			printf("%d \n",i);
		}
		i++;
	}
}
