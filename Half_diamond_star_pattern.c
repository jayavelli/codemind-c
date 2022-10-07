#include<stdio.h>


int main()
{
     int n;
     scanf("%d",&n);
     int i,j,c=1;
     if(n>=3)
     {
         for(i=1;i<n*2;i++)
         {
             for(j=1;j<=c;j++)
             {
                 printf("*");
             }
             if(i<n)
             {
                 c++;
             }
             else
             {
                 c--;
             }
             printf("
");
         }
     }
     else
     {
         printf("The pattern is not possible");
     }
     

}