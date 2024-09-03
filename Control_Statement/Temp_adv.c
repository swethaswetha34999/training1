

#include<stdio.h>
#include<stdlib.h>
int main()
{
int temp;
printf("enter the temperature : \n");
scanf("%d",&temp);
if(temp > 30)
{
	printf("ts too hot , so stay hydrated ! \n");
}
else if(temp <=30 && temp >20)
{
	printf("The weather is nice and warm \n");
}
else if(temp <=20 && temp >10)
{
	printf("It's a bit chilly, wear a jacket \n");
}
else if(temp <=10)
{
	printf("It's cold outside, stay warm ! \n");
}
else
{
	printf("not valid \n");
}
}


