#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10],i=0,j=0,r,k=1,h=0,t=n;
    while(t)
    {
        r=t%10;
        a[i]=r;
        t/=10;
        i++;
        j++;
    }
    for(i=0;i<j;i++)
    {
        for(k=i+1;k<=j;k++)
        {
            if(a[i]==a[k])
            {
                h=1;
                break;
            }
        }
    }
   if(h==1)
   {
       printf("Not Unique Number
");
   }
   else
   {
       printf("Unique Number
");
   }
}