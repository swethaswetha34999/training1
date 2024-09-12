#include<stdio.h>
#define MAX 100

int main()
{
int arr[MAX];
int size;
int i;
int max=arr[0];
int min = arr[0];

printf("enter the size of an array:\n");
scanf("%d",&size);
printf("enter the elements of an array:\n");
for(i=0;i<=size;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<=size;i++)
{
if(arr[i] > max)
{
max =arr[i];
}
if(arr[i] <min)
{
min = arr[i];
}
}
printf("%dMin\n",min);
printf("%dmax\n",max);
return 0;
}

