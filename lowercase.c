#include<stdio.h>
void main()
{
char ch;
printf("enter the character:\n");
scanf("%c",&ch);
printf("%c the character is ",ch);
if(ch>='a'&& ch<='z')
{
printf("lowercase");
}
else
printf("UPPERCASE");
}

