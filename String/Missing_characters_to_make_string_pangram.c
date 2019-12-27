#include<stdio.h>

void Take_String(char []);
void Find_missing_char(char []);

void Find_missing_char(char str[])
{
    int Alpha[26]={0},i=0;
    while(str[i]!='\0')
    {
        int index;
        if(str[i]>='A' && str[i]<='Z')
        {
            index=str[i]-'A';
        }
        else
        {
            if(str[i]>='a' && str[i]<='z')
            {
                index=str[i]-'a';
            }
        }
        Alpha[index]=1;
        i++;
    }

printf("\nMissing Characters for making Pangram string:");
    for(int i=0;i<26;i++)
    {
        if(Alpha[i]==0)
        {
        printf("%c",(i+'a'));
        }
    }
    printf("\n");
}

void Take_String(char str[])
{
    printf("\nEnter the string:");
    scanf("%[^\n]s",str);
}
int main()
{
    char str1[100];

    Take_String(str1);

    Find_missing_char(str1);

    return 0;
}