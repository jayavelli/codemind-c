#include <stdio.h>

int main()
{
    char str[64];
    int i = 0;
    int s = 0,f=0;
    scanf("%s", str);

    for(i=0;str[i]!=NULL;i++)
    {
        if ((str[i] >= 48) && (str[i] <= 57))
           {
               s++;
               f=1;
           }
    }
    if(f==1)
    printf("Contains %d digit", s);
    else
    printf("Doesn't contain digit");

    return 0;
}
