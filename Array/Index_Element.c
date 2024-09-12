#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
int num;
int i;
int arr[MAX]={1,2,3,4,5,6,7,8,9,10};
printf("enter the searching number:\n");
scanf("%d",&num);
for(i=0;i<sizeof(arr);i++)
{
if(num == arr[i])
{
printf("the number %d is found\n",arr[i]);
printf("the index of the element is %d\n",i);
break;
}
}
//printf(sizeof(arr));
return EXIT_SUCCESS;
}

