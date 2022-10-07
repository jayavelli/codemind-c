#include<stdio.h>


int main()
{
     int n,m;
     scanf("%d",&n);
     int i,j,c=0,k=0,l,a[n];
     for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }
         scanf("%d",&m);
            for(i=0;i<n;i++)
            {
                if(a[i]<=m)
                {
                    c+=1;
                }
                else
                {
                    c+=2;
                }
                
            }
            printf("%d",c);
}