#include<stdio.h>


int main()
{
     int n;
     scanf("%d",&n);
     int i,j,c=1;
     for(i=0;i<n;i++)
         {
             for(j=1;j<n+1-i;j++)
             {
                 printf("%d",j);
             }
             
             printf("
");
         }
     }
     