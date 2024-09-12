#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
int arr[MAX];
int size;
int i;
int sum=0;
int count =0;
int avg;
printf("Enter the size of an array : \n");
scanf("%d",&size);
printf("Enter the elements of an array :\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
count = count + 1;
//printf("%d",count);
sum = sum + arr[i];
//count = count + 1;
}
//printf("%dSum",sum);
//printf("%dCount",count);
//return (sum);
//return (count);
avg = sum / count;
printf("Sum of an array is :  %d \n",sum);
printf("Average of an array is :  %d \n",avg);
return EXIT_SUCCESS;
}
