#include<stdio.h>

void Round_number_10(int);

void Round_number_10(int num)
{
    int a=(num/10)*10;
    int b=a+10;
    if(num-a > b-num)
    {
        printf("\nOutput:%d\n",b);
    }
    else
    {
        printf("\nOutput:%d\n",a);
    }
}

int main()
{
    int n=0;
    printf("\nEnter the number:");
    scanf("%d",&n);

    Round_number_10(n);
    return 0;
}