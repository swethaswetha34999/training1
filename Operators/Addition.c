

#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1;
int num2;
int ret_value;
printf("enter the num1 =  \n");
scanf("%d",&num1);
printf("enter the num2 = \n");
scanf("%d",&num2);
ret_value = printf(" the sum of %d and %d is %d \n", num1, num2, num1+num2);
if(ret_value < 0)
{
printf("error \n");
return EXIT_FAILURE;
}
return EXIT_SUCCESS;
}



