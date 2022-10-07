#include<stdio.h>


int main()
{
     int n;
     scanf("%d",&n);
     int i,j,c=1;
     for(i=n;i>=1;i--)
         {
             for(j=n;j>=1;j--)
             {
                 if(i==j||i==n+1-j)
                 {
                     printf("%d ",i);
                 }
                 else
                 {
                     printf(" ");
                 }
                 
                     
                 
                
             }
            
             
            
     printf("
");
         }
}