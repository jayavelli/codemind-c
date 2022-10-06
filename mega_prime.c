#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=pow(n,0.5);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    int n,k,r;
    scanf("%d",&n);
    k=0;
    if(prime(n))
    {
        while(n)
        {
            r=n%10;
            if(prime(r))
            {
                k=1;
            }
            else
            {
                k=0;
                break;
            }
            n/=10;
        }
    }
    if(k==1)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}