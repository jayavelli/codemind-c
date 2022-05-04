#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,flag=0;
 for(i=0;i<n;i++)
    {
        if(n==i*(i+1))
        {
            flag=1;
            
            
        }
  
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}