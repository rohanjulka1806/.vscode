#include <stdio.h>
//Function prototype and function declaration
int fact(int n)
{

    if (n == 1 || n == 0)
    {
     return 1;
    }
    else
    {
        return (n * fact (n - 1));
    }
}
//Use of function int in the code
int main()
{
    int num;//Let us assume a variable number be num
    printf("Enter the number you want the factorial of : \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, fact(num));

    return 0;
}