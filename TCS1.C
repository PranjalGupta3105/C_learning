#include<stdio.h>
void main()
{
   int N,i,num;
   clrscr();
   printf("Enter N : ");
   scanf("%d",&N);
   for(i=0;i<=N-1;i++)
   {
    if(i%2==0)
    {
    if(i==0)
    {
    printf("%d\t",i);
    }
    else
    {
     printf("%d\t",(i/2)*6);
    }
    }
    else
    {
     if(i==1)
     {
     printf("%d\t",0);
     }
     else
     {
     printf("%d\t",(i/2)*7);
     }

    }

   }
   getch();
}
