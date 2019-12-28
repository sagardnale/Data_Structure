#include<stdio.h>

void Take_string(char []);
void find_initials_string(char []);

void find_initials_string(char str[])
{
    printf("\nOutput:");
    printf("%c ",(str[0]-32));
    int i=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            printf("%c ",(str[i+1]-32));
        }
        i++;
    }
    printf("\n");
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

    find_initials_string(str);
    return 0;
}