#include<stdio.h>
#include<stdlib.h>

void Take_element_array(int **,int);
void Display_array(int *,int);
void Cycle_array(int **,int);


void Cycle_array(int **arr,int n)
{
    int temp1=(*arr)[n-1];
    for(int i=n-1;i>0;i--)
    {
        (*arr)[i]=(*arr)[i-1];
    }
    (*arr)[0]=temp1;
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

void Take_element_array(int **arr,int n)
{
    (*arr)=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("\nMemory error...\n");
    }
    else
    {
        printf("Enter the elements:");
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

    Take_element_array(&arr,n);

    printf("\nOrignal Array:");
    Display_array(arr,n);

    printf("\nAfter one cycle in array:");
    Cycle_array(&arr,n);
    Display_array(arr,n);

    return 0;
}