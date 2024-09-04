

#include<stdio.h>
#include<stdlib.h>
#define H 60
int main()
{
float minute;
printf("enter the time in minutes : \n");
scanf("%f",&minute);
printf("the converted time(hours) of %.1f m is %.1f h \n",minute,minute/H);
return EXIT_SUCCESS;
}
