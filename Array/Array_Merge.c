#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

int main()
{
int arr1[MAX];
int arr2[MAX];
int arr3[MAX];
int s1;
int s2;
int s3;
int i;

printf("enter the size of an first array : \n");
scanf("%d",&s1);

printf("enter the elements :\n");
for(i=0;i<=s1;i++)
{
	scanf("%d",&arr1[i]);
}

printf("enter the size of an second array : \n");
scanf("%d",&s2);

printf("enter the elements for second array : \n");
for(i=0;i<=s2;i++)
{
	scanf("%d",&arr2[i]);
}

//3rd array size

s3=s1+s2;

for(i=0;i<=s1;i++)
{
	arr3[i]=arr1[i];
}

for(i=0;i<=s2;i++)
{
	arr3[i+s1]=arr2[i];
}

printf("the combined array is :\n");
for(i=0;i<=s3;i++)
{
	printf("%d\n",arr3[i]);
}
return EXIT_SUCCESS;
}


