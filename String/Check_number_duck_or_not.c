#include<stdio.h>

void Take_string(char []);
void check_duck_number(char []);

void check_duck_number(char str[])
{
    if(str[0]=='0')
    {
        printf("\nOutput:Not duck number..\n");
    }
    else
    {
        printf("\nOutput:Duck Number..\n");
    }
    
}

void Take_string(char str[])
{
    printf("\nInput:");
    scanf("%s",str);
}


int main()
{
    char str[100];

    Take_string(str);

    check_duck_number(str);
    return 0;
}