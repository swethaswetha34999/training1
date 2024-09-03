

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
int radius;
int area;
printf("enter the radius of the circle : \n");
scanf("%d", &radius);
area = PI*radius*radius; 
printf("Area of the Circle is %d \n", area);
return EXIT_SUCCESS;
}

