/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//switch case practice

#include <stdio.h>

int main()
{
    int s,b,h,A;     //side,breadth,height variable declaration
    int geo;
    printf("Enter 1 for square \n");
    printf("Enter 2 for triangle \n");
    scanf(" %d",&geo);
    switch(geo)
    {
        case(1):
     {
        printf("Dear user enter side values of a square\n");
        scanf(" %d",&s);
        A=s*s;
        printf("The area is %d\n",A);
        break;
        
     }
     case(2):
     {
         printf("Dear user enter width and height of a triangle\n");
         scanf(" %d %d",&b,&h);
         A=0.5*(b*h);
         printf("The area is %d\n",A);
         break;
     }
     default: 
     {
         printf("you have entered wrong key\n");
}
}}