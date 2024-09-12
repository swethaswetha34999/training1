#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
int a[MAX];
int size;
int i;
printf("enter the size of an array : \n");
scanf("%d",&size);
printf("enter the element of an array: \n");
for(i=1;i<=size;i++)
{
	scanf("%d",&a[i]);
}
printf("after removing duplicates :\n");
for(i=1;i<=size;i++)
{
	if(a[i] != a[i+1])
	{
		printf("%d\n",a[i]);
	}
//	else
//	{
//	printf("");
//	}
}
return EXIT_SUCCESS;
}

