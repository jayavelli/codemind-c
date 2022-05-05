#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int r,sum=0;
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
   
    if(t%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}