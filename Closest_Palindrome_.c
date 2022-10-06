#include<stdio.h>
int rev(int n)
{
    int r,re=0,t=0;
    t=n;
    while(t)
    {
        r=t%10;
        re=re*10+r;
        t/=10;
    }
    if(n==re)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
     int n;
     scanf("%d",&n);
     int t,d,f,s;
     t=n;
     while(1)
     {
         t+=1;
         if(rev(t))
         {
             d=t;
             break;
         }
     }
     s=n;
     while(1)
     {
         s-=1;
         if(rev(s))
         {
             f=s;
             break;
         }
         
     }
     if(d-n<n-f)
     {
         printf("%d",d);
     }
     else if(d-n>n-f)
     {
         printf("%d",f);
     }
     else
     {
         printf("%d %d",f,d);
     }
}