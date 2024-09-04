

#include<stdio.h>
#include<stdlib.h>
#define week 7

int main()
{
int day;
int weeks_Calc;
int Bal_day;
printf("Enter the number of days : \n");
scanf("%d",&day);
weeks_Calc = day / week;
Bal_day = day % week;
printf("%d days are %d weeks, %d days \n",day,weeks_Calc,Bal_day);
return EXIT_SUCCESS;
}
