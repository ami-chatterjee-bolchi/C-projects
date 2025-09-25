#include<stdio.h>
#include<conio.h>
#include<math.h>
int isArmstrong(int);
int isKrishnamurthy(int);
int isPerfect(int);

//Main function ->

int main(){	
	int choice,flag;
	
	do{
		
    	printf("\n---------------Checking The Given Number---------------\n");
    	printf("\n");
    	printf("1. if is it a Armstrong no. \n");
    	printf("\tor\n");
    	printf("2. if is it a Krishnamurthy  no. \n");
    	printf("\tor\n");
    	printf("3. if is it a Perfect no. \n");
    	printf("\tor\n");
    	printf("Enter your choice (1 or 2 or 3): ");			//Taking input choice
    	scanf("%d", &choice);
    
//Switch case ->

    	switch(choice){
    		case 1:{													//Case 1 for Armstrong number
    			int num,res=0;
    			printf("\nEnter a number : ");
    			scanf("%d",&num);
    			res = isArmstrong(num);
    			if(res==1)
    				printf("\n%d is an Armstrong number",num);
    			else
    				printf("\n%d is not an Armstrong number",num);
    				
    		break;
	
		}
			case 2:{													//Case 2 for Krishnamurthy number
    			int rem,num,res=0,n;
    			printf("\nEnter a number : ");
    			scanf("%d",&num);
    			n=num;
    			if(num<0)
					printf("Invalid input");
				else if (num==0)
					printf("Invalid input");
				else{
					while(num!=0){
						rem=num%10;
						num=num/10;
						res += isKrishnamurthy(rem);
					}    				
    			if(res==n)
    				printf("\n%d is a Krishnamurthy number",n);
    			else
    				printf("\n%d is not a Krishnamurthy number",n);
	
				}
				break;
		}
			case 3:{														//Case 3 for Perfect number
    			int num,res=0;
    			printf("\nEnter a number : ");
    			scanf("%d",&num);
    			res = isPerfect(num);
    			if(res==1)
    				printf("\n%d is a Perfect number",num);
    			else
    				printf("\n%d is not a Perfect number",num);
    				
    		break;
    	}
    		default:{
    			printf("\n INVALID CHOICE !");
				break;
			}
		}
			printf("\n\n\t Do you want to continue? (Press 'y' to continue, any other key to exit):\t");
			scanf(" %c",&flag);
			if(flag!='y'&&flag!='Y')
				break;
		}while(1);
		
return 0;
}
// Armstrong checking function ->

int isArmstrong(int n){
	int num=n, num2=n, c=0, rem, sum=0;
	
// Count digit ->

	while(num!=0){
		num=num/10;
		++c;	
	}
	
// Calculations ->

	while(num2!=0){
		rem=num2%10;
		num2=num2/10;
		sum +=pow(rem,c);
	}
	if(sum==n)
		return 1;
	
return 0;		
}

// Factorial checking function for Krishnamurthy number ->

int isKrishnamurthy(int n){
	int fact=1,i;
		
// Calculations ->
	for(i=1;i<=n;i++){
		fact*=i;
	}
return fact;	
}

//Perfect number checking function ->

int isPerfect(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			sum+=i;	
	}
	if(sum==n)
		return 1;
	
	else
		return 0;
}
