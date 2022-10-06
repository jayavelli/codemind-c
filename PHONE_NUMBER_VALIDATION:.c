#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    char ch[20];
    scanf("%s",ch);
    k=strlen(ch);
    if(k==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}