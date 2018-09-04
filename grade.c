#include<stdio.h>
void main()
{
int a;
printf("enter the number:\n");
scanf("%d",&a);
printf("the student mark is %d\n ",a);
printf("the student is ");
if(a>=90)
{
printf("O GRADE");
}
else if(a>=70){
printf("A GRADE");
}
else if(a>=50)
    printf("B GRADE");
else
    printf("fail");
}

