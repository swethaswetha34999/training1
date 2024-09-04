

#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
printf("Enter the num : \n");
scanf("%d",&num);
if(num > 0)
{
	printf("%d is a Positive number \n",num);
}
else if(num==0)
{
	printf("%d is a neutral number \n",num);
}
else if (num < 0)
{
	printf("%d is a negative number \n", num);
}
else
{
	printf("please enter a integer number! \n");
}
}

