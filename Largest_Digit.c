#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,ld=0;
    while(n>0)
    {
        r=n%10;
        if(r>ld)
        {
            ld=r;
        }
        n=n/10;
    }
    printf("%d",ld);
}