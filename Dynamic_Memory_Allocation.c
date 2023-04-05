/*  #include<stdio.h>
#include<stdlib.h>
int main (){
int *ptr ;
ptr = (int*) malloc(6* sizeof(int));
for (int i =0 ;i<6;i++){
    printf("Enter the value of %d element : ",i);
    scanf("%d", &ptr[i]);
}
for (int i =0 ;i<6;i++){
printf("The value of %d element is : %d\n",i, ptr[i]);   
}
return 0;
 }   */
//Use of Calloc Function & it's syntax (Quick Quiz Question)
/*#include<stdio.h>
#include<stdlib.h>
int main (){
int *ptr ;
int n;
printf("How many integers do you want to enter : \n");
scanf("%d", &n);
ptr = (int*) calloc(6, sizeof(int));
for (int i =0 ;i<n;i++){
    printf("Enter the value of %d element : ",i);
    scanf("%d", &ptr[i]);
}
for (int i =0 ;i<n;i++){
printf("The value of %d element is : %d\n",i, ptr[i]);   
}
return 0;
}*/
//Use of realloc()
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int*) malloc(6 * sizeof(int));
    for (int i = 0; i<6; i++){
        printf("Enter the value of %d element :\n", i);
        scanf("%d", &ptr[i]);
    }
for (int i=0; i<6;i++){
    printf("The value of %d element is :%d\n",i,ptr[i]);
}

//Reallocate ptr using realloc()
ptr = realloc(ptr, 10*sizeof(int));

for (int i=0;i<10;i++){
    printf("Enter the value of %d element : \n",i);
    scanf("%d", &ptr[i]);
}
for (int i=0;i<10;i++){
    printf("The value of %d element is %d \n",i, ptr[i]);
return 0;
}
}