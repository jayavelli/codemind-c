#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int i,j,a,n,ar[100],d=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        
    
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if (ar[i]>ar[j])
            {
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
                d++;
            }
        }
    }
                if(d==0)
                {
                    printf("0");
                }
            
        else
        {
            printf("%d",ar[n-1]-ar[0]);
        }
        printf("
");
    }
}