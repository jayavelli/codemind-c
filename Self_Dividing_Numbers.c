#include<stdio.h>
int main()
{
    int a,b,c,k,s,i,r,p;
    scanf("%d%d",&a,&b);
   
        
    
    for(i=a;i<=b;i++)
    {
        k=i;
        p=i;
        s=0;
        c=0;
        while(k!=0)
        {
            r=k%10;
            s+=1;
            if(r!=0)
            {
                if(i%r==0)
                {
                    c+=1;
                }
            }
            k/=10;
            
        }
        
       
            if (s==c)
            {
                printf("%d ",p);
            }
        }
    }
            