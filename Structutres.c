// Creating and using a Structure
/*#include<stdio.h>
#include<string.h>
struct employee{ //To define a data type to store the variables of the variable employee
    int code;
    float salary;
    char name[10];
};
int main (){
    int a=34;
    char b='g';
    float d = 234.453;
    struct employee e1; //Declaring the details of employee e1
    e1.code = 100;
    e1.salary = 34.454;
    strcpy(e1.name, "Rohan");
    printf("The employee Code is %d\n",e1.code);
    printf("The employee Salary is %.3f\n",e1.salary);
    printf("The employee Name is %s\n",e1.name);
    return 0;
}           */
// Taking input by the user and storing details of 3 employees
/*#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1,e2,e3;
    printf("Enter the name of e1: \n");
    scanf("%s",e1.name);
    printf("Enter the code of e1: \n");
    scanf("%d",&e1.code);
    printf("Enter the salary of e1: \n");
    scanf("%f",&e1.salary);

    printf("Enter the name of e2: \n");
    scanf("%s",e2.name);
    printf("Enter the code of e2: \n");
    scanf("%d",&e2.code);
    printf("Enter the salary of e2: \n");
    scanf("%f",&e2.salary);

    printf("Enter the name of e3: \n");
    scanf("%s",e3.name);
    printf("Enter the code of e3: \n");
    scanf("%d",&e3.code);
    printf("Enter the salary of e3: \n");
    scanf("%f",&e3.salary);
    return 0;
}               */
// Array of Structures
/*#include<stdio.h>
#include<string.h>
struct employee{ //To define a data type to store the variables of the variable employee
    int code;
    float salary;
    char name[20];
};
int main (){
    struct employee Rohan[100];

    Rohan[0].code = 100 ;
    Rohan[0].salary = 100.456 ;
    strcpy(Rohan[0].name,"Ramesh");

    Rohan[1].code = 101 ;
    Rohan[1].salary = 90.456 ;
    strcpy(Rohan[1].name,"Suresh");

    Rohan[2].code = 102 ;
    Rohan[2].salary = 80.456 ;
    strcpy(Rohan[2].name,"Raj");

    printf("The storage of data is done using arrays of structures ");
    return 0;
}*/
// Another way to initialise strings
/*  #include<stdio.h>
#include<string.h>
struct employee{ //To define a data type to store the variables of the variable employee
    int code;
    float salary;
    char name[20];
};
int main (){
    struct employee Rohan = {100, 34.56 , "Suresh"};
    printf("Employee Code is : %d\n",Rohan.code);
    printf("Employee Salary is : %0.3f\n",Rohan.salary);
    printf("Employee Name is : %s\n",Rohan.name);

    return 0;
} */
// Pointers to Structures
/*  
#include <stdio.h>
#include <string.h>
struct employee
{ // To define a data type to store the variables of the variable employee
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 101; // Alternate way for this line is:     ptr->code=101;
    printf("%d", e1.code);
    return 0;
}               */
//Passing Structure to a Function
/*
#include <stdio.h>
#include <string.h>
struct employee
{ // To define a data type to store the variables of the variable employee
    int code;
    float salary;
    char name[20];
};
void show (struct employee emp){
    printf("The Code of employee is : %d\n",emp.code);
    printf("The Salary of employee is : %f\n",emp.salary);
    printf("The Name of employee is : %s\n",emp.name);
    emp.code = 34;
    }
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101; // Alternate way for this line is:     ptr->code=101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Rohan");
    show(e1);
    return 0;
}           */
