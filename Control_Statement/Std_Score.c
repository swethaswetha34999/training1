

#include<stdio.h>
#include<stdlib.h>

int main()
{
int Score;
printf("enter your score : \n");
scanf("%d",&Score);
if(Score >= 90)
{
printf("grade A \n");
}
else if(Score >=80 && Score <90)
{
printf("Grade B \n");
}
else if(Score >=70 && Score < 80)
{
printf("Grade C \n");
}
else if(Score >=60 && Score < 70)
{
printf("Grade D \n");
}
else
{
printf("fail \n");
}
return EXIT_SUCCESS;
}

