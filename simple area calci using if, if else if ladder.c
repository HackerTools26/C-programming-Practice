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
    printf("Dear user kindly enter geometry name \n( c for circle, s for square, r for rectangle )\n");
    scanf(" %c",&geo);
    if( geo == 'c' )
{
    printf("Enter circle radius:\n");
    scanf(" %d",&rad);
    A=PI * rad * rad;
    P=2 * PI * rad;
    printf("The circle\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else if ( geo == 's')
{
     printf("Enter side value of a square:\n");
     scanf(" %d",&side);
     A=side * side;
     P=side * 4;
     printf("The square\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else if ( geo == 'r')
{
    printf("Enter length and width of a rectangle:\n");
    scanf(" %d %d",&L,&W);
    A=L * W;
    P=(2 * L )+( 2 * W);
    printf("The rectangle\n Area is %d\nPerimeter is %d\n\n",A,P);
}
else 
{
    printf("You have entered wrong geometry name\n");
}
    return 0;
}

