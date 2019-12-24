#include<stdio.h>
#include<stdlib.h>

void Take_element(int **,int);
void Display_array(int *,int);
int Search_element(int *,int,int);

int Search_element(int *arr,int n,int s)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            ans=1;
            break;
        }
    }
    return ans;
}

void Display_array(int *arr,int n)
{
    printf("\nArray:");
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
        printf("\nEnter the elements:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&(*arr)[i]);
        }
    }
    
}

int main()
{
    int *arr=NULL,n=0,search=0;
    printf("\nHow many array elements:");
    scanf("%d",&n);

    Take_element(&arr,n);
    Display_array(arr,n);

    printf("\nEnter the element to search:");
    scanf("%d",&search);
    int ans=Search_element(arr,n,search);
    if(ans==1)
    {
        printf("\nElement found...\n");
    }
    else
    {
        printf("\nElement not found...\n");
    }
    
    return 0;
}