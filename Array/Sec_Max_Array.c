#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
int a[MAX];
int i;
int size;
int max=a[1];
int min=a[0];
printf("Enter the size of an array :\n");
scanf("%d",&size);
printf("Enter the elements :\n");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}
printf("The second largest element in the array is:\n");
for(i=0;i<=size;i++)
{
if(min<a[i])
{
	if(max>a[i])
	{
		printf("%d\n",a[i]);
	}
}
}
return EXIT_SUCCESS;
}


