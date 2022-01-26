/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14

int main()
{
    char geo;   //vaariable declaration
    int A,P,L,W,rad,side; //variable declaration
    printf("Dear user kindly enter geometry name: \n( c for circle, s for square, r for rectangle )\n");
    scanf(" %c",&geo);
    if( geo == 'c' )
{
    printf("Enter circle radius:\n");
    scanf(" %d",&rad);
    A=PI * rad * rad;   //formula for circle area
    P=2 * PI * rad;     //formula for circle perimeter 
    printf("The circle\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else if ( geo == 's')
{
     printf("Enter side value of a square:\n");
     scanf(" %d",&side);
     A=side * side;     //formula for square area
     P=side * 4;        //formula for square perimeter
     printf("The square\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else if ( geo == 'r')
{
    printf("Enter length and width of a rectangle:\n");
    scanf(" %d %d",&L,&W);
    A=L * W;            //formula for rectangle area
    P=2 * (L + W);      //formula for rectangle perimeter
    printf("The rectangle\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else 
{
    printf("You have entered wrong geometry name\n");
}
    return 0;
}

