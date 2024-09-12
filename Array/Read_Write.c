#include<stdio.h>
#include<stdlib.h>
//#define MAX 5

int main()
{
int a[5];
int i;
printf("enter the numbers\n");
for(i=0;i < 5;++i)
{
	scanf("%d", &a[i]);
}
printf("the entered numbers are : ");
for(i=0;i < 5;++i)
{
	printf("%d\n", a[i]);
}

printf("the entered numbers are : ");
//for(i=0;i < 5;)
//{
	printf("index 3 of a is %d\n", a[3]);
//}

printf("the entered numbers are : ");
for(i=0;i < 5;++i)
{
	printf("printing a using address %p\n",a);
}
return 0;
}


