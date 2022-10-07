#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,count=0;
    scanf("%d%d",&n,&m);
   int a[n][m],b[n],i,c=0,s=0,j,k=0,oc=0,ec=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            
        
       scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            
        
        c+=a[i][j];
        }
        
    }
    printf("%d",c);
}