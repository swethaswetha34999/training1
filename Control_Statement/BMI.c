

#include<stdio.h>
#include<stdlib.h>

int main()
{
float weight;
float height;
float bmi;
printf("Enter the Weight : \n");
scanf("%f",&weight);
printf("Enter the Height : \n");
scanf("%f", &height);
bmi = weight / (height * height);
printf("your Body Mass Index(BMI) is %f \n",bmi);
return EXIT_SUCCESS;
}

