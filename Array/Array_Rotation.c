#include<stdio.h>
#include<stdlib.h>

void Take_element(int **,int);
void Display_array(int *,int);
void Rotate_array(int **,int,int);
void Rotate_left_array_by_one(int **,int);

void Rotate_left_array_by_one(int **arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp=(*arr)[i];
        (*arr)[i]=(*arr)[i+1];
        (*arr)[i+1]=temp;
    }
}

void Rotate_Array(int **arr,int r,int n)
{

    if(r>n)
    {
        printf("\nUnable to rotate Array\n");
    }
    else
    {
        while(r>0)
        {
            Rotate_left_array_by_one(arr,n);
            r--;
        }
    }

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
        printf("\nMemory Error...\n");
    }
    else
    {
        printf("\nEnter array element:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&(*arr)[i]);
        }
    }
    

}
int main()
{
    int n=0,*arr=NULL,rotate=0;

    printf("How many elements in array:");
    scanf("%d",&n);

    Take_element(&arr,n);

    printf("\nOrignal:");
    Display_array(arr,n);

    printf("\nHow many element rotate:");
    scanf("%d",&rotate);
    printf("\nAfter rotation:");
    Rotate_Array(&arr,rotate,n);
    Display_array(arr,n);

    
    return 0;
}