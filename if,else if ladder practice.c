/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//This is to practice if elseif ladder with logical operators.
//This simple program will allow user to view a content based on their age eligibility.

#include <stdio.h>
#define KID 17
#define YOUNG 18
#define ADULT 35
#define SR_CITIZEN 50
#define YEAR 2022

int main()
{
    char name[10]=""; //variable for getting username
    int age,DOB;        //variable for getting date of birth and age calculation
    printf("Dear user kindly enter your name:\n");
    scanf(" %s",name);
    printf("Hey %s please provide your year of birth in yyyy format to know your eligibility to view the content:\n",name);
    scanf(" %d",&DOB);
    age=(YEAR-DOB);
    if((age<=KID) && (age!=YOUNG)) // 17 years old or below should not see it.
    {
    printf("Hey kid you can't view this content\n"); 
    }
    else if ((age>=YOUNG) && (age<ADULT)) //18 to 34 years old can see it but limited time only.
    {
        printf("you can view this content, but you have only 60 min to stay here\n");
    }
    else if ((age>=ADULT) && (age<=SR_CITIZEN)) //35 to 50 years old can see it with no time limit.
    {
    printf("Hey man you have no time limit. you can view this content any time\n");
    }
    else 
    {
        printf(" Hey %d years old man sorry to say this you are too old to view this content. choose another content to view\n",age);
    }
    }
    
    
