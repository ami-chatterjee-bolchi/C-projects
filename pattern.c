#include<stdio.h>
int isFact(int);
void main(){
	int i,j,n,nCr=0;
	printf("\n Enter the number of rows of the Pascal's triangle : ");
	scanf("%d",&n);
	printf("\n The Pascal's triangle is :");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			nCr=isFact(i)/(isFact(j)*isFact(i-j));
			printf("%5d",nCr);
		}
		printf("\n");
	}
}
int isFact(int n){
	if(n==0)
		return 1;
	else
		return (n*isFact(n-1));
}
