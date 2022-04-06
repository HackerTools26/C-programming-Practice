/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#define SQFT 10.75
#define SQM 0.092
int main()

{   float value,sqf,sqm;
	int choice;
	printf("Dear user choose your option\n\n");
	printf("1.square meter to square feet\n");
	printf("2.square feet to square meter\n\n");
	scanf(" %d", &choice);
switch(choice)
{	
	case(1): { 
	printf("Enter square meter\n");
	scanf(" %f", &value);
	sqf = SQFT * value;
	printf("Square feet value is %f\n",sqf);
	break;
}
	case(2): {
	printf("Enter square feet\n");
	scanf(" %f", &value);
	sqm = SQM * value;
	printf("Square meter value is %f\n",sqm);
	break;
}

	default: printf("you have entered wrong option\n");
return 0;
}	
}
