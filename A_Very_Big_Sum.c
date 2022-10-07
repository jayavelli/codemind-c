#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,count=0;
    scanf("%lld",&n);
   long long int a[n],b[n],i,c=0,s=0,j,k=0,oc=0,ec=0;
    for(i=0;i<n;i++)
    {
       scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c+=a[i];
        
    }
    printf("%lld",c);
}