

#include<stdio.h>
#include<stdlib.h>
int main()
{
const float div = 1.8;
float temp_C;
float temp_F;
const int num = 32;
printf("enter the Celsius Temperature : \n");
scanf("%f",&temp_C);
temp_F = (temp_C * div) + num;
printf("the converted temp of %f is %f \n", temp_C, temp_F);
return EXIT_SUCCESS;
}

