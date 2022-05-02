#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m,r,sum=0;
    m=n*n;
    while(m>0)
    {
        r=m%10;
        sum+=r;
        m=m/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}