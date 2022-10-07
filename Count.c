#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n],temp[n],i,p=0,s=0,j,k=0,oc=0,ec=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            ec+=1;
        }
        else if(a[i]%2!=0)
        {
            oc+=1;
        }
    }
    
    
       
        printf("%d ",ec);
        printf("%d ",oc);
   
    
       // printf("Principal Diagonal:%d
Secondary Diagonal:%d",p,s);
    

}