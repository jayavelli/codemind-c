#include<stdio.h>

           int main()

           {

                      int len=0,j,t,i=0;

                      char s1[100];

                      scanf("%[^
]s",s1);

                      for(i=0;s1[i]!=NULL;i++)

                      {

                                 len++;

                      }

                      j=len-1;

                      i=0;

                      while(i<j)

                      {                    

                      t=s1[j]; //t=o;

                      s1[j]=s1[i];//h

                      s1[i]=t;

                      i++;

                      j--;

           }

           printf("%s",s1);

                     

          

}