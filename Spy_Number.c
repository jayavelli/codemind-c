#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int res=0,pro=1,d;
    while(n>0)
    {
        d=n%10;
        res+=d;
        pro*=d;
        n=n/10;
        
    }
    if(res==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}