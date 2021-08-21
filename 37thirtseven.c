#include<stdio.h>
void main(){
	int cp,sp;
	
	printf("Enter the cp and sp:");
	scanf("%d%d",&cp,&sp);
	
	if(cp==sp){
		printf("No profit no loss");
	}
	else if(cp>sp){
		printf("Loss is %d \n",cp-sp);
	}
	else{
		printf("Profit is %d \n",sp-cp);
	}
}
