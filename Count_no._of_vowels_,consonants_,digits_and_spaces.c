#include<stdio.h>
int main()
{
    char s1[1000];
    scanf("%[^
]s",s1);
    int i;
     int vowels=0,White_spaces=0,Consonants=0,Digits=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            vowels++;
        }
        else if(s1[i]>=48&&s1[i]<=57)
        {
            Digits++;
        }
        else if(s1[i]==32)
        {
            White_spaces++;
        }
        else if(s1[i]>=97&&s1[i]<=122 ||s1[i]!=97&&s1[1]!=101&&s1[i]!=106&&s1[i]!=111&&s1[i]!=117)
        {
            Consonants++;
        }
    }printf("Vowels: %d
",vowels);
    printf("Consonants: %d
",Consonants);
    printf("Digits: %d
",Digits);
    printf("White spaces: %d
",White_spaces);
}