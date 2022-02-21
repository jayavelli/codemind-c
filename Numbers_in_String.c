#include <stdio.h>

int main()
{
    char str[64];
    int i = 0;
    int s = 0,f=0;
    scanf("%[^
]s", str);

    for(i=0;str[i]!=NULL;i++)
    {
        if ((str[i] >= 48) && (str[i] <= 57))
           {
              
              f+=(str[i]-'0');
           }
    }
    printf("%d",f);
   
    return 0;
}
