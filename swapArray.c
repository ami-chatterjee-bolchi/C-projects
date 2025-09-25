#include<stdio.h>
int main(){
	int i,n,c=0,temp=0;
	printf("Enter the number of elements of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter the elements of the Array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n The entered array is : ");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	for(i=0;i<(n-1);i+=2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}	
	printf("\nThe swapped array is : ");
	for(i=0;i<n;i++){
		printf("\t %d",a[i]);
	}
return 0;	
}
