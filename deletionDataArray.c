//data based deletion of element 
#include<stdio.h>

int main(){
	int i,j,size,data,pos=-1;
	printf("\nEnter the size of the array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements of the array : ");
	
	for (i=0;i<size;i++){				//taking inputs
		scanf("%d",&a[i]);
	}
	printf("\nThe entered array is :");				//displaying entered array
	for (i=0;i<size;i++){
		printf("%3d",a[i]);
	}
	printf("\nEnter the data what you want to delete : ");
	scanf("%d",&data);
	
	for(i=0;i<size;i++){					//calculating the new array
		if(a[i]==data){
			pos=i;
			break;
		}
	}
	if(pos==-1){
		printf("\nElement not found in the array \n");
	}
	else{
		size--;
		for(j=pos;j<size;j++){
			a[j]=a[j+1];
		}
		
		
		printf("\nThe modified array is : ");			//Display the array
		for(i=0;i<size;i++){
			printf("%d ",a[i]);
		}
	}
return 0;
}

