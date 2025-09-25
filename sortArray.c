#include<stdio.h>
int main(){
	int i,j=0,k=0,n,element;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\nEnter the elements of the array : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=0)	
			a[j++]=a[i];	
		else
			b[k++]=a[i];
	}
	printf("\n The array with positive elements is : \n");
	for(i=0;i<j;i++){
		printf("%5d",a[i]);
	}
	printf("\n The array with negative elements is : \n");
	for(j=0;j<k;j++){
		printf("%5d",b[j]);
	}
return 0;	
}
