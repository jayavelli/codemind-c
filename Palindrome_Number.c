#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int  a[n],b[n],r,i;
    for(i=0;i<n;i++)
    {
        rev=0 ;
        scanf("%d",&a[i]);
        b[i]=a[i];
    while(a[i]>0)
    {
        r=a[i]%10;
        rev=(rev*10)+r;
        a[i]=a[i]/10;
    }
    if(b[i]==rev)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
  }
}
