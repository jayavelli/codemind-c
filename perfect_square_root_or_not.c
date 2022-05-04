#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}