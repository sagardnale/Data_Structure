#include<stdio.h>

void Display_array(int [],int);
void Rearrange_array(int [],int);
int search_element(int [],int,int);

int search_element(int arr[],int n,int s)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==s)
        {
            return 1;
            break;
        }
        i++;
    }
    return 0;
}

void Rearrange_array(int arr[],int n)
{

    int temp_arr[100];
    for(int i=0;i<n;i++)
    {
            if(search_element(arr,n,i)==1)
            {
                temp_arr[i]=i;
            }
            else
            {
                temp_arr[i]=-1;
            }
        
    }
    arr=&(temp_arr);
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
    int arr[100],n=0;
    printf("\nHow many array elements:");
    scanf("%d",&n);

    printf("\nEnter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nBefore operation:");
    Display_array(arr,n);

    printf("\nAfter operation:");
    Rearrange_array(arr,n);
    Display_array(arr,n);
    return 0;
}