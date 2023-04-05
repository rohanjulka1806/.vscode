// Write a program to calculate the sum of multiplication table of 8
/*#include <stdio.h>

int main() {
    int i,sum=0,b=8;
    for(i=1;i<11;i++)
    {
        b=8*i;
        sum+=b;
    }
    printf("%d",sum);
    return 0;
}*/
// Write a program to calculate the factorial of a number using for loop
/*#include<stdio.h>
int main()
{
 int i,n,f=1;
 printf("Enter a number: ");
  scanf("%d",&n);
    for(i=1;i<=n;i++){
      f=f*i;
  }
  printf("Factorial of %d is: %d",n,f);
return 0;
} */
// Write a program to calculate the factorial of a number using while loop
/*
#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}
*/
// Write a program to find whether a given number is prime or not using loops
#include <stdio.h>
int main()
{
    int x, i;
    printf("Enter the number : ");
    scanf("%d", &x);
    for (i = 2; i <= x; i++)
        if (x % i == 0)
        {
            break;
        }
    if (i == x)
    {
        printf("%d is a Prime Number .", x);
    }
    else
    {
        printf("%d is not a Prime Number . ", x);
    }
    return 0;
}
