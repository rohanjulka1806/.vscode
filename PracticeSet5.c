// Code for average of three functions using functions
/*#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the values of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    printf("Enter the value of c : \n");
    scanf("%d",&c);
    printf("The value of average is : %f",average(a,b,c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
*/
// Code for Celsius to Fahrenheit Conversion;
/*#include <stdio.h>
float convert (float celsius);
int main()
{
    float c;
printf("Enter the value of celsius : ");
scanf("%d",&c);
printf("The temperature in Fahrenheit is : %f",convert(c));
return 0;
}

float convert(float celsius){
float fahrenheit;
fahrenheit=(9/5)*c+32;
return fahrenheit;
}
*/
// Write a program to convert mass into force
/*#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the value of mass in kgs \n");
    scanf("%d", &m);
    printf("The value of force in Newtons is %.2f\n", force(m));
    return 0;
}

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}
*/
//C program using recusrion to get sum of first n natural numbers 
/*#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
*/
//Write a program using functions to print the following pattern
/*
*
***
*****
*/
