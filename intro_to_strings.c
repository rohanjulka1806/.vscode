//Using %c
/*#include<stdio.h>
int main (){
    char str[]="Rohan Julka";
    char *ptr = str;//It states that the pointer is equal to the first character of the string 
    while (*ptr!='\0'){//We are using while loop because to repeat till '\0' character is arrived,loop remains active
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}*/
//Alternate & Convenient Way to Print Strings using %s
/*#include<stdio.h>
int main (){
    char str[]="Rohan Julka";
       
    printf("%s",str);
    return 0;
}
*/
//Taking input by user in string 
/*#include<stdio.h>
int main (){
    char s[34];
    printf("Enter your name : ");
    scanf("%s",s);
    printf("Your name is %s",s);
    return 0;
}
*/
//Why & How to use gets in the code ? It is used to store a name with spaces as scanf can't store a name with spaces.
/*#include<stdio.h>
int main (){
    char s[34];
    printf("Enter your name : ");
    gets(s);
    printf("Your name is %s",s);
    return 0;
}
*/
//How to use standard library functions in strings 1) strlen
/*#include<stdio.h>
#include<string.h>
int main (){
    char str[]="Rohan";
    int a= strlen(str);   
    printf("The length of the string str is %d",a);
    return 0;
}*/
//How to use 2)strcpy standard library function 
/*#include<stdio.h>
#include<string.h>
int main (){
    char source[]="Rohan";
    char target[34];
    printf("The value of target is now %s",source);
    return 0;
}*/
// Write a program to display the role of strcat
/*#include<stdio.h>
#include<string.h>
int main (){
    char str1[]="Rohan";
    char str2[]="Julka"; 
    strcat(str1,str2);  
    printf("The value of str2 now is %s",str1);
    return 0;
}*/
//Use of strcmp
/*#include<stdio.h>
#include<string.h>
int main (){
    char str1[]="Rehan";//Agar iska chota hai to -ve i.e.here e comes earlier than r otherwise +ve
    char str2[]="Rohan"; 
    int value = strcmp(str1,str2);  
    printf("The value is %d",value);
    return 0;
}    */

