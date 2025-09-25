#include<stdio.h>
int main(){
	int i,j,k,cols,rows,row2,col2;
	
// Taking inputs of 1st matrix -->

	printf("\nEnter the row no of the 1st matrix : ");
	scanf("%d",&rows);
	printf("\nEnter the column no of the 1st matrix : ");
	scanf("%d",&cols);
	int a[rows][cols];
	printf("\nEnter the elements of the 1st matrix : ");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe 1st matrix is: \n");			// Printing the 1st matrix 
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
//Taking inputs of 2nd matrix -->

	printf("\nEnter the row no of the 2nd matrix : ");
	scanf("%d",&row2);
	printf("\nEnter the column no of the 2nd matrix : ");
	scanf("%d",&col2);
	int b[row2][col2];
	printf("\nEnter the elements of the 2nd matrix : ");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe 2nd matrix is: \n");			// Printing the 2nd matrix 
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}	
	
// Checking & Multipling the matrixes -->

	if(cols==row2){
	int res[rows][col2];
	for(i=0;i<rows;i++){
		for(j=0;j<col2;j++){
			res[i][j]=0;
				for(k=0;k<row2;k++){
					res[i][j] += a[i][k]*b[k][j];
				}
			}
		}
	printf("The multiplication is : ");
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<col2;j++){
			printf("%3d",res[i][j]);
		}
		printf("\n");
	}

	}
	else{
		printf("\n Matrix multiplication is not possible due to unmatched row or column numbers");
	}		
}
