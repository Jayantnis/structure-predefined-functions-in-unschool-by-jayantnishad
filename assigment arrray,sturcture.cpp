#include <stdio.h>//unschoool by jayantnishad
#include <stdlib.h>//including in stdlib header files
 ///using in typedef struct function .
typedef struct{
    char name[30];
    int id;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=5;//n =5 so 5 employees print
 
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("\n\a====Enter %d Employee Details ====\a\n",n);
    for(i=0; i<n; i++)
	{
 
        printf("Employee %d:- \n",i+1);//next line \n at i+1 1 no. increaments
        //Name
        printf("Name:-  ");     scanf("%s",employees[i].name);
        //ID
        printf("Id:-    ");       scanf("%d",&employees[i].id);
        //Salary
        printf("Salary:- ");   scanf("%d",&employees[i].salary);
        printf("\n");
    }
 
   
    //Displaying Employee details
    printf("\n\a~--------------~ All Employees Details ~---------------~\a\n");
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }///successfully run time
 
    return 0;
 
}
