#include<stdio.h>
int main()
{
    int n,i=1,sum=0,temp;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        
        }
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}