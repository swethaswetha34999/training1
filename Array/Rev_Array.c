//header

#include<stdlib.h>
#include<stdio.h>
#define MAX 50

//main function
int main()
{
int arr1[MAX];
int arr2[MAX];
int i;
int size;
int j;

printf("enter the size of an array : \n");
scanf("%d",&size);

printf("enter the elements of an array : \n");
for(i=1;i<=size;i++)
{
	scanf("%d",&arr1[i]);
}

//copying array in reverse order

for(i=size-1,j=0;i>=0;i--,j++)
{
	arr2[j]=arr1[i];
}

//printing output

printf("Reverse arr is \n");

for(i=0;i<size;i++)
{
	printf("%d\n",arr1[i]);
}
return EXIT_SUCCESS;
}


