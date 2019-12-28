#include<stdio.h>
#include<stdlib.h>

int Sum_of_digits(char []);
int Sum_digits(int);

int Sum_digits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%2);
        num=num/2;
    }
    return sum;
}

int Sum_of_digits(char str[])
{
    int i=0,j=0;
    char num[100];
    while(str[i]!='\0')
    {
        if(str[i]>=48 && str[i]<=57)
        {
            num[j]=str[i];
            j++;
        }
        i++;
    }
    return Sum_digits(atoi(num));
}

int main()
{
    char str[100];

    printf("\nEnter the string:");
    scanf("%[^\n]s",str);

    printf("\nOutput:%d\n",Sum_of_digits(str));
    return 0;
}