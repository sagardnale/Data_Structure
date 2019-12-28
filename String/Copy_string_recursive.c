#include<stdio.h>

void Take_string(char []);
void Copy_string(char [],char [],int);

void Copy_string(char str1[],char str2[],int i)
{
    if(str1[i]=='\0')
    {
        str2[i]='\0';
        return ;
    }
    else
    {
        str2[i]=str1[i];
        Copy_string(str1,str2,i+1);
    }
    
}
void Take_string(char str[])
{
    printf("\nEnter the string:");
    scanf("%[^\n]s",str);
}

int main()
{
    char str1[100],str2[100];

    Take_string(str1);

    printf("\nBefore Copy Operation:");
    printf("\nString 1:%s",str1);
    printf("\nString 2:%s",str2);
    
    printf("\nAfter Copy Operation:");
    Copy_string(str1,str2,0);
    printf("\nString 1:%s",str1);
    printf("\nString 2:%s\n",str2);
    
    return 0;
}