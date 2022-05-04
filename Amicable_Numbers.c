#include<stdio.h>
int main()
{
    int n,m,j;
    scanf("%d%d",&n,&m);
    int r,rev=0,d,i,sum=0,s,f;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        rev+=i;
        
    }
    }

    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
       sum+=j;
    }
    }
  
    if(rev==m && sum==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}