

#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1;
int num2;
int max_num;
printf("enter the Num1 : \n");
scanf("%d",&num1);
printf("enter the Num2 : \n");
scanf("%d",&num2);
max_num=(num1 > num2) ? (num1) : (num2);
printf("the maximum number is %d \n", max_num);
return EXIT_SUCCESS;
}

