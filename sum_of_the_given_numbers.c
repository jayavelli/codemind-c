#include<stdio.h>
int main()
{
    int n;
    int a,b,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}