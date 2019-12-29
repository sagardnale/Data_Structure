#include<stdio.h>
#include<stdlib.h>

void Find_pair_with_sum(int [],int,int);

void Find_pair_with_sum(int arr[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j];
            if(sum==num)
            {
                printf("\nOutput:%d sum of pair(%d,%d)\n",num,arr[i],arr[j]);
                break;
            }
        }
    }
}

int main()
{
    int arr[100],n=0,num=0;
    printf("\nHow many array elements:");
    scanf("%d",&n);

    printf("\nEnter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number to find sum pair:");
    scanf("%d",&num);

    Find_pair_with_sum(arr,n,num);
    return 0;
}