// Write a program using function whcih calculates the sum and average of two numbers.Use pointers and print sum & avg
/*
#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %0.2f\n", avg);
    return 0;
}
*/
// Write a program to print the value of a variable i by using pointer to pointer type of variable;
#include <stdio.h>
int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of i is %d", **ptr_ptr);
    return 0;
}