#include<stdio.h>
#include<stdlib.h>

void Take_element(int **,int);
void Display_array(int *,int);
void Maximum_value_sum(int *,int);

void Maximum_value_sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+i*arr[i];
    }
    printf("\nMaximum value sum (i*arr[i])=%d\n",sum);
}

void Display_array(int *arr,int n)
{
    printf("Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Take_element(int **arr,int n)
{
    (*arr)=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("\nMemory error...\n");
    }
    else
    {
        printf("\nEnter array elements:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&(*arr)[i]);
        }
    }
    
}

int main()
{
    int *arr=NULL,n=0;
    printf("\nHow many array elements:");
    scanf("%d",&n);

    Take_element(&arr,n);
    Display_array(arr,n);

    Maximum_value_sum(arr,n);
    return 0;
}