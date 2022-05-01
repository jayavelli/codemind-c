#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,rev=0,m,d,res=0,h,w,pro=0,v;
    while(n!=0)
    {
        r=n%10;
        rev+=r;
        n=n/10;
    }
    m=rev;
    while(m!=0)
    {
        d=m%10;
        res+=d;
        m=m/10;
        
    }
    h=res;
    while(h!=0)
    {
        w=h%10;
        pro+=w;
        h=h/10;
    }
    printf("%d",pro);
}