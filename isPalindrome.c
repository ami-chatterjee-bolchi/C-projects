#include<stdio.h>
#include<string.h>
int main(){
	
	int choice;
	char flag;
    do{
    	printf("\n---------------Check Palindrome---------------\n");
    	printf("1. Integer\n");
    	printf("2. String\n");
    	printf("Enter your choice (1 or 2): ");
    	scanf("%d", &choice);
    		switch(choice){
    			case 1:{
    				int num,i,j,rem,m=0,rev=0;
    				printf("\nGive your number : ");
    				scanf("%d",&num);   			
    				m=num;
    				while(num!=0){
    					rem=num%10;
    					num=num/10;
    					rev=rev*10+rem;
    				}
    				if(m==rev){
    					printf("\n%d is a Palindrome number.",m);
					}
					else{
						printf("\n%d is not a Palindrome number.",m);
					}
    			break;
				}
				
				case 2:{
					char word[100];
					int i,length,isPalindrome=1;
					printf("\nEnter the word : ");
					scanf("%s",&word);
					length=strlen(word);
					for(i=0;i<length/2;i++){
						if(word[i]!=word[length-i-1]){
							isPalindrome=0;
							break;
						}
					}
					if(isPalindrome)
						printf("\n%s is a Palindrome word",word);
					else
						printf("\n%s is not a Palindrome word",word);
				break;
				}
				default:{
					printf("\nINVALID CHOICE");
				break;
				}
			}
			printf("\n\n Do you want to continue? (Press 'y' to continue, any other key to exit): ");
			scanf(" %c",&flag);
			if(flag!='y'&& flag!='Y')
				break;
				
	} while(1);
	
return 0;
}
