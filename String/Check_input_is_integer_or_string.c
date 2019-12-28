#include<stdio.h>

void Take_string(char []);
int check_input(char []);
int check_digit(char );

int check_digit(char ch)
{
    int ans;
    if(ch >=48 && ch<=56)
    {
        ans=0;
    }
    else
    {
        ans=1;
    }
    return ans;
}

int check_input(char str[])
{
    int i=0;
    
    while(str[i]!='\0')
    {
        if(check_digit(str[i]) ==1)
        {
            return 1;
            break;
        }
        i++;
    }
    return 0;
}

void Take_string(char str[])
{
    printf("\nEnter the string:");
    scanf("%[^\n]s",str);
}

int main()
{
    char str[100];
    Take_string(str);

    printf("\nOutput:");
            
    if(check_input(str)==1){
        printf("String..\n");
    }
    else
    {
        printf("Integer..\n");
    }
    
}