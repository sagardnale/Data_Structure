#include<stdio.h>

void Take_string(char []);
void Display_string(char []);
void Copy_string(char [],char []);

void Copy_string(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}

void Display_string(char str1[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        printf("%c",str1[i]);
        i++;
    }
    printf("\n");
}

void Take_string(char str1[])
{
    printf("\nEnter the string:");
    scanf("%[^\n]s",str1);
}

int main()
{
    char str1[100],str2[100];

    Take_string(str1);

    printf("\nFirst String:");
    Display_string(str1);

    printf("\nAfter the String Copy in Second String:");
    Copy_string(str1,str2);
    Display_string(str2);

return 0;
}