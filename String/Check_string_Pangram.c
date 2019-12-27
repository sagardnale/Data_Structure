#include<stdio.h>

void Take_string(char []);
int Check_string_pangram(char []);

int Check_string_pangram(char str1[])
{
    int Alpha[26]={0},i=0;
    while(str1[i]!='\0')
    {
        int index=0;
        if(str1[i]>='A' && str1[i]<='Z')
        {
            index=str1[i]-'A';
        }
        else
        {
            if(str1[i]>='a' && str1[i]<='z')
            {
                index=str1[i]-'a';
            }
        }
        Alpha[index]=1;
        i++;
    }

    for(int i=0;i<26;i++)
    {
        if(Alpha[i]==0)
        {
            return 1;
            break;
        }
    }
    return 0;
}

void Take_string(char str1[])
{
    printf("\nEnter the string:");
    scanf("%[^\n]s",str1);
}

int main()
{
    char str1[100];

    Take_string(str1);
    int ans=Check_string_pangram(str1);

    printf("\nOutput:");
    if(ans==1)
    {
        printf("\nString is not Pangram..");
    }
    else
    {
        printf("\nString is Pangram..");
    }
    printf("\n");
    
    return 0;
}