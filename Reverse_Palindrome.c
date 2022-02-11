#include<stdio.h>
int reverse(int n)
{
    int d,rev=0;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
        
    }return rev;
    
}
int main()
{
    int a;
    scanf("%d",&a);
    do
    {
        a=a+reverse(a);
    }while(a!= reverse(a));
printf("%d",a);
}