#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main()
{
int arr[MAX];
int size;
int i;
int a;

printf("Enter the size of an array :\n");
scanf("%d",&size);

// the init of i should be same in both input(17) and output(34)
printf("Enter the elements : \n");
for(i=0;i<=size;i++)
{
	scanf("%d",&arr[i]);
}

for(i=0;i<=size;i++)
{
	for(int j=i+1;j<=size;j++)
	{
		if(arr[i]>arr[j])
		{
			a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
	}
}
printf("the ascending order is : \n");
for(i=0;i<=size;i++)
{
	printf("%d\n",arr[i]);
}
return EXIT_SUCCESS;
}


