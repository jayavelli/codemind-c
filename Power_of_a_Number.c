#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M;
    scanf("%d%d%d",&x,&y,&M);
    int d,n;
    n=pow(x,y);
    d=n%M;
    printf("%d",d);
}