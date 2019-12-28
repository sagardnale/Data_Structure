#include<stdio.h>

void character_count(char []);

void character_count(char str[])
{
    char alpha[26]={0};
    int i=0;
    while(str[i]!='\0')
    {
        int index=0;
        if(str[i]>=97 && str[i]<=122)
        {
            index=(str[i]-'a');
        }
        alpha[index]=alpha[index]+1;
        i++;
    }

    printf("\nCharacter count=");
    for(int j=0;j<26;j++)
    {
        if(alpha[j]>0)
        {
            printf("%c=%d\n",('a'+j),alpha[j]);
        }
    }
}


int main()
{
    char str[100];
    printf("\nEnter the string:");
    scanf("%[^\n]s",str);

    character_count(str);
    return 0;
}