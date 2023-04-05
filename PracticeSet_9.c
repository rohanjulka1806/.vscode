//Practice set question no. 1 To create a 2-D vector using structures in C
/*#include<stdio.h>
struct vector{
    int x;
    int y;
};
    int main (){
    struct vector v1,v2;
    v1.x = 34;
    v1.y = 54;
    printf("The X dim of Vector is %d and Y dim is %d\n", v1.x,v1.y);
    v2.x = 24;
    v2.y = 14;
    printf("The X dim of Vector is %d and Y dim is %d\n", v2.x,v2.y);
    return 0;
}*/
//Question Number 2 function of sumVector which returns the sum of two vectors passed to it .Vectors must be 2-D
#include<stdio.h>
struct vector{
    int x;
    int y;
};
    struct vector sumVector (struct vector v1, struct vector v2){
        struct vector result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;
        return result;
    }
    int main (){
    struct vector v1,v2,sum;
    v1.x = 34;
    v1.y = 54;
    printf("The X dim of Vector is %d and Y dim is %d\n", v1.x,v1.y);
    v2.x = 24;
    v2.y = 14;
    printf("The X dim of Vector is %d and Y dim is %d\n", v2.x,v2.y);
    
    sum = sumVector(v1,v2);
    printf("The X dim of Result is %d and Y dim is %d\n", sum.x,sum.y);
    return 0;
}
