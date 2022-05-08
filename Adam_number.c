#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y,x,r,d,res=0,rev=0;
    y=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    x=rev*rev;//441
    while(x!=0)
    {
        d=x%10;
        res=res*10+d;
        x=x/10;
    }
    if(y==res)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}