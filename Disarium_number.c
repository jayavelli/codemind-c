#include<stdio.h>

#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d,r,temp,sum=0;
    temp=n;
    
    while(n!=0)
    {
        r=n%10;
        d=(int)log10(n)+1;
        sum=sum+pow(r,d);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}