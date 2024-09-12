#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main()
{
int arr[MAX]={1,2,3,4,5,6,7,8,9,10};
int i;
//printf("enter no of natural numbers that you want to print:");
//for(i=0;i<MAX;i++)
//{
//scanf("%d",&arr[1]);
//}
//printf(arr[i]);
printf("the first %d natural numbers are\n ",arr[MAX]);
for(int i=0;i<MAX;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}

