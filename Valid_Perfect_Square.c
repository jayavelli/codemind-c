#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ivar;
    float fvar;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     
        fvar=sqrt((double)a[i]);
     
        ivar=fvar;
        
    
    
        if(ivar==fvar)
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
