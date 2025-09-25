//position based insertion of element
#include<stdio.h>

int main(){
	int i,j,size,pos,num;
	printf("\nEnter the size of the array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements of the array : ");
	
	for (i=0;i<size;i++){					//taking inputs of the array
		scanf("%d",&a[i]);
	}
	printf("\nThe entered array is :");			//displaying the entered array
	for (i=0;i<size;i++){
		printf("%3d",a[i]);
	}
	
	printf("\nEnter data u want to insert : ");
	scanf("%d",&num);
	printf("\nEnter the position : ");
	scanf("%d",&pos);
	
	if(pos>0 && pos<=size){
	printf("\nThe new array is : ");
	for(i=size-1;i>=pos-1;i--){
		a[i+1]=a[i];
		
	}
	a[pos-1]=num;
	size++;
	for (i=0;i<size;i++){
		printf("%3d",a[i]);
	}
}
	else
	printf("Invalid position");
	
return 0;
}

