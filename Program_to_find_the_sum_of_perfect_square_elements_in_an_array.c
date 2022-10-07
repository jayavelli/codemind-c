#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n],temp[n],i,p=0,s=0,j,k=0;
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
        }
    
    for(i=1;i<=n;i++)
    {
        k=sqrt(a[i]);
        if(k*k==a[i])
        {
            s+=a[i];
        }
        
        
        }
        printf("%d",s); 
   
    
       // printf("Principal Diagonal:%d
Secondary Diagonal:%d",p,s);
    

}