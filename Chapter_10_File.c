/*#include<stdio.h>
int main (){

    FILE *ptr;
    ptr = fopen("Sample.txt","r");  //For reading the file Can only read or write one at a time
    //ptr = fopen("Sample.txt","w");  //For writing the file
    return 0;
}   */
// TO print the values from other txt files using fscanf
/*#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Sample.txt", "r"); // For reading the file Can only read or write one at a time
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    return 0;
}*/
//Quick Quiz Problem
/*  #include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Sample1.txt", "r"); // For reading the file Can only read or write one at a time
    if(ptr == NULL) {
        printf("The file does not exists.\n");
    }
    else {
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);}

    return 0;
} */
//Writing in a file 
/*  #include <stdio.h>
int main()
{
    FILE *ptr;
    int num = 205;
    ptr = fopen("Generate.txt","w");
    fprintf(ptr, "The number is %d", num);
    fclose(ptr);
    return 0;
} */
//Use of fgetc()
/*  #include <stdio.h>
int main()
{
    FILE *ptr;
  //fgetc demo for writing a file
  ptr = fopen("getcdemo.txt", "r");
  char c = fgetc(ptr);
  printf("The value of my character is %c\n", fgetc(ptr));
  printf("The value of my character is %c\n", fgetc(ptr));
  printf("The value of my character is %c\n", fgetc(ptr));
  printf("The value of my character is %c\n", fgetc(ptr));
  printf("The value of my character is %c\n", fgetc(ptr));
  
    return 0;
}           */
//Using putc function
/*      #include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    return 0;
}   */
//File read through fgetc Or EOF (End of File)
#include <stdio.h>
int main()
{
    FILE *ptr;
    char c ;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF){
        printf("%c",c);
        c = fgetc(ptr);
    }
    return 0;
}