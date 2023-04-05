/*#include <stdio.h>
int main()
{
    int marks[4]; // Allocate space for 4 integers
    printf("Enter the marks of student 1: ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2: ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3: ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4: ");
    scanf("%d", &marks[3]);
 printf("You have entered the marks as following:\n %d\n %d\n %d\n %d\n" ,marks[0],marks[1],marks[2],marks[3]);
    return 0;
}*/
// Short method for printing values using ARRAYS
/*#include <stdio.h>
int main()
{
    int marks[5];
    int i;
    for (i=0;i<5;i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d", &marks[i]);
    }
for (i=0;i<5;i++)
    {
        printf("The marks of student %d is %d\n ",i+1,marks[i);
    }
    return 0;
}*/
// Accessing Arrays using pointers
/*#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    //ptr = &marks[0]; Alternate line for line number 40 i.e. ptr =marks
    ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for student %d: \n", i + 1);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
} */
// Multidimensional Arrays
#include <stdio.h>
int main()
{
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}
