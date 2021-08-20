/*wap to declare an array of struct containing student data - name , branch , cgpa 
   - write student_count(..) fn to take input on no.of students 
   - write input_data(..) fn to input details of student data 
    - write print(..) fn to print details of all students 
*/


#include <stdio.h>

struct student{
    
    char name[100],branch[100];
    float cgpa;
}data[10];

void input_data(int n){

    printf("Enter the data - Name,Branch,cgpa \n");
    int i;
    
    for (i=0;i<n;i++){
     printf("Name : ");
     scanf("%s",&data[i].name);
     printf("Branch : ");
     scanf("%s",&data[i].branch);
     printf("CGPA: ");
     scanf("%f",&data[i].cgpa);
    }
}

void print_data(int n){
	int i;
    printf("student data - Name, Branch,cgpa\n");
    for ( i=0;i<n;i++){
     printf("%s %s %f\n",data[i].name,data[i].branch,data[i].cgpa);
    }
}
int main()
{
    int n;
    printf("\nEnter total no.of inputs\n");
    scanf("%d",&n);
    input_data(n);
    print_data(n);
}
