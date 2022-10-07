#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n],temp[n],i,p=0,s=0,j;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
        }
    
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<count;j++)
        {
            if(a[i]==temp[j])
            
               break;
        }
            if(j==count)
            {
                temp[count]=a[i];
                count++;
            }
        }
    for(i=0;i<count;i++)
    {
        printf("%d ",temp[i]);
    }
    
    
       // printf("Principal Diagonal:%d
Secondary Diagonal:%d",p,s);
    

}