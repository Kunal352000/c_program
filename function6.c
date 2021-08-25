#include<stdio.h>
int evenOdd(int n);
void main(){
int n;
printf("Enter a number: ");scanf("%d\n",&n);
if(evenOdd(n)){
puts("odd");
	}
else{
puts("even");
	}
}
int evenOdd(n){
	return n%2;
}
