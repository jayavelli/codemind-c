#include<stdio.h>
int main( )
{
    int n,digit,sum=0,product=1,x;
    scanf("%d",&n);
    while(n>0)
    {
        int digit=n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    x=product-sum;
    printf("%d",x);
}