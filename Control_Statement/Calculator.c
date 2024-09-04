

#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1;
int num2;
int options;
printf("enter the first number \n");
scanf("%d",&num1);
printf("Enter the num2 \n");
scanf("%d",&num2);
printf("enter the option 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division\n");
scanf("%d",&options);
switch (options)
{
case 1 :
	printf(" the add of %d + %d is %d \n",num1,num2,num1+num2);
	break;
case 2 :
	printf("the subtraction of %d -  %d is %d \n",num1,num2,num1-num2);
	break;
case 3:
	printf("the multiplication of %d x %d is %d \n",num1,num2,num1*num2);
	break;
case 4:
	printf("the division of %d / %d is %d \n",num1,num2,num1/num2);
	break;
default:
	printf("invalid \n");
	break;
}
return EXIT_SUCCESS;
}






