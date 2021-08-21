#include<stdio.h>
#include<conio.h>
void main(){
	
	char ch;
	printf("Enter any Alphabet");
	scanf("%c",&ch);
	
	if((ch >='A' && ch <= 'Z') || (ch >='a' && ch <='z')){
	
	 switch(ch)
	 {
	 		case 'A':
	 		case 'E':
		 	case'I' :
				case'O' :
				 	case'U' :
					 	case'a' :
						 	case 'e' :
							 	case 'i':
								 	case 'o' :
									 	case'u' :
										 
			printf("%c is VOWEL. \n",ch);
			break;
			
			default:
			printf("%c is CONSTANT. \n",ch);
		}
	}
			else{
				printf("%c is not ALPHABET. \n",ch);
			}
			
					
	 	}
