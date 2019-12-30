#include<stdio.h>

void Display_array(int [],int);
void Reverse_array(int [],int);

void Reverse_array(int arr[],int n)
{
    int i=0,j=(n-1);
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void Display_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n=0,arr[100];
    printf("\nHo many array elements:");
    scanf("%d",&n);

    printf("\nEnter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nOrignal Array:");
    Display_array(arr,n);

    printf("\nAfter operation array:");
    Reverse_array(arr,n);
    Display_array(arr,n);

    return 0;
}