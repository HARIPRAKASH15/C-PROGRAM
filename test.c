#include<stdio.h>
void main()
{
     int a[10];
     int h,j,temp,n;
     int i;
     printf("enter the numbers\n");
      printf("enter the size\n");
      scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        scanf("%d\n",&a[i]);
     }
        printf("before sort\n");
       for(i=0;i<n;i++)
     {
         printf("%d\n",a[i]);

     }

     h=0;
     for(i=0;i<n;i++)
     {
         if(a[h]<a[i])
         {
             h=i;
         }
     }
      printf("highest is at position %d\n",h);
     for(i=0;i<n;i++)
     {
         for(j=i;j<n;j++)
         {

             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }

     }
         printf("after  sort\n");
      for(i=0;i<n;i++)
     {
         if(i==h)
         printf("-\n");
         else
            printf("%d\n",a[i]);

     }


}
