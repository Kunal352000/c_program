#include<stdio.h>
void main(){
	int n,firstdigit,lastdigit,f1,f2;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(firstdigit>=1){
		firstdigit=firstdigit/10;
	}
	
	
	
	printf("Firstdigit %d: \n",firstdigit);
	printf("Lastdigit %d: \n",lastdigit);
	
	f1=firstdigit;
	f2=lastdigit;
	
	f1=f1+f2;
	f2=f1-f2;
	f1=f1-f2;
	
	printf("%d",f1);
	printf("23");
	printf("%d",f2);	
}
