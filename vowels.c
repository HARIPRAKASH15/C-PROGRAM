#include<stdio.h>
void main()
{
char ch;
printf("enter the character  :\n");
scanf("%c",&ch);

printf("the character is   ");
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("%c vowel",ch);
}
else
{
printf("%c consonent",ch);
}
}
