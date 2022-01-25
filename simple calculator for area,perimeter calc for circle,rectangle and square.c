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
    int data,Area,Perimeter,L,W; //variable for getting values from user L=length W=width
    printf("Dear user kindly enter the radius to find area of a circle:\n");
    scanf(" %d",&data);
    Area=PI*(data * data); //pi*radius*radius
    Perimeter=2*PI*data;    //2*pi*radius
    printf("The area and circumference of the circle is\n Area:%d   Perimeter:%d\n\n",Area,Perimeter);
    printf("Dear user kindly enter the side value to find the area of square:\n");
    scanf(" %d",&data);
    Area=data * data;   //side*side
    Perimeter=data*4;   //4*side
    printf("The area and circumference of the square is\n Area:%d   Perimeter:%d\n\n",Area,Perimeter);
    printf("Dear user kindly enter the Length and Width to find the area of rectanle:\n");
    scanf(" %d %d",&L,&W);
    Area=L*W;   //lentgh * width
    Perimeter=(2*L)+(2*W);  //2*lentgh+2*width
    printf("The area and circumference of the rectangle is\n Area:%d   Perimeter:%d\n\n",Area,Perimeter);
    return 0;
}
