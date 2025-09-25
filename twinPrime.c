#include<stdio.h>
int isPrime(int);
void main (){
	int lower,upper,i;
	printf("\n Enter the lower limit : ");
	scanf("%d",&lower);
	printf("\n Enter the upper limit : ");
	scanf("%d",&upper);
	printf("\n The twin prime between %d and %d are : \n\t",lower,upper);
	for(i=lower;i<(upper-2);i++){
		if(isPrime(i)&&isPrime(i+2))
			printf("\n\t %d,%d",i,(i+2));
	}
}

int isPrime(int n){
	int i,c=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			c=0;
			break;
		}
	return c;
	}
}
