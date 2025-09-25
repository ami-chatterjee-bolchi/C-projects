//define a structure student having the following members: roll,age, avg. marks, grade

#include<stdio.h>
#include<conio.h>
struct student {
    int roll;
    int age;
    float avg_marks;
    char grade;
};

int main() {
	int i,n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
    struct student s[n]; 
	char x;
	printf("\n-------------------------------------------------------------\n");
	
//taking input:-

    for(i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Average marks: ");
        scanf("%f", &s[i].avg_marks);
        getchar();
        printf("Grade: ");
       	scanf("%c",&s[i].grade); 
		printf("\n----------------------------------\n");      
    }
    
    //checking grade the Grade is 
    
    for(i=0;i<n;i++){						
    	if(s[i].avg_marks>=90){
    		s[i].grade='A';
		}	
		else if(s[i].avg_marks>=70){
			s[i].grade='B';
		}
		else if(s[i].avg_marks>=50){
			s[i].grade='C';
		}
		else if(s[i].avg_marks>=30){
			s[i].grade='D';
		}
		else{
			s[i].grade='F';
		}
	}

    // Display data
    printf("\n-------------------------------------------------------------\n");
    printf("\nStudent Details are :- \n");
    for(i = 0; i < n; i++) {
        printf("\n Data of Student %d is : \n", i + 1);
        printf("\n Roll number: %d \n", s[i].roll);
        printf("\n Age: %d \n", s[i].age);
        printf("\n Average Marks: %f \n", s[i].avg_marks);
        printf("\n Grade:%c \n", s[i].grade);
        printf("\n----------------------------------\n");
    }
    return 0;
}
