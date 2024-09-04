

#include<stdio.h>
#include<stdlib.h>

int main()
{
char letter;
printf("Enter the letter : \n");
scanf("%c",&letter);
switch (letter)
{
case 'a' :
	printf("vowel \n");
	break;
case 'e' :
	printf("vowels\n");
	break;
case 'i' :
	printf("vowel \n");
	break;
case 'o' :
	printf("vowel\n");
	break;
case 'u' :
	printf("vowel\n");
	break;
default:
	printf("consonant\n");
	break;
}

}
