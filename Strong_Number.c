#include<stdio.h>
 #include<math.h> 
 int str(int n)
 {
     int i,s=1;
     for(i=n;i>0;i--)
     {
         s*=i;
     }
     return s;
 }
 int main() 
 { 
 int n,r;
  scanf("%d",&n); 
  int t=n,k=0;
   while(t) //966>0 , 66>0 , 6>0, 0>0 
   { 
   r=t%10;
   k+=str(r);
   t/=10;
   }
   if(n==k)
   {
       printf("The number %d is a strong number",n);
   }
	 
	else
	   {
	       printf("The number %d is not a strong number",n);
	  
		
        }
 }