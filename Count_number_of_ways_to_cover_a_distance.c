#include<stdio.h>

int count(int d)
{
    if(d<0)
    {
        return 0;
    }
    else if(d==0)
    {
        return 1;
    }
    else
    {
        return count(d-1)+count(d-2)+count(d-3);
    }
}

int main()
{
     int dist,k;
     scanf("%d",&dist);
     
         k=count(dist);
         printf("%d",k);
}