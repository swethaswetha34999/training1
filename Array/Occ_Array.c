#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
int a[MAX];
int size;
int input;
int i;
int j;
int count=0;
printf("array size\n");
scanf("%d",&size);

printf("enter the elements of an array :\n");
for(i=1;i<=size;i++)
{
	scanf("%d",&a[i]);
}

printf("enter the element\n");
scanf("%d",&input);

for(i=0;i<size;i++)
{
	if(input == a[i])
	{
//	printf("The element %d is repeated %d times\n",a[i],count);
	count++;
	//count =1;
		}

	}
printf("The element %d is repeated %d times\n",input,count);
return EXIT_SUCCESS;
}


			
