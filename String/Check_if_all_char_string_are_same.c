#include<stdio.h>

void Take_string(char []);
int check_string(char []);

int check_string(char str[])
{
    char ch=str[0];
    int i=1;
    while(str[i]!='\0')
    {
        if(ch!=str[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void Take_string(char str[])
{
    printf("\nEnter String:");
    scanf("%[^\n]s",str);
}

int main()
{
    char str[100];

    Take_string(str);

    if(check_string(str)==1)
    {
        printf("\nAll Characters of the string are same..\n");
    }
    else
    {
        printf("\nNot All Characters of the string are same..\n");
    }
    
    return 0;
}