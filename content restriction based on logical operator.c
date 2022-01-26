/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//program for content view restriction based on age
//here only 18 to 25 age people can view this content.

#include <stdio.h>
#define YEAR 2022

int main()
{
    char name[10]="";       //username variable declaration
    int YOB,age;            //year of birth and age declaration 
    printf("Dear user enter your name:\n");
    scanf(" %s",name);
    printf("Hai %s. please enter your year of birth in yyyy format\n",name);
    scanf(" %d",&YOB);
    age=YEAR-YOB;
    if ( (age<=17) && (age!=18) )   //below 17 can't view 
    {
    printf("hey kid you can't view this content.\n");
    }
    else if ( (age==18) || (age<=25) )  //18 to 25 can view but above 25 can't view
    {
        printf("Dear %s you can view this content.\n",name);
    }
    else 
    {
    printf("sorry Mr.%s you are above 25 years old so you can't view this content.\n",name); 
    }
    return 0;
}
