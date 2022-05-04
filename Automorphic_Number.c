#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n*n;
    int r,d,f;
    
    {
        r=s%10;
        d=s%100;
        f=s%1000;
       
    }
    if(n==r || n==d || n==f)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}