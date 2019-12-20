#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void Insert_Last_Linked_List(struct node **,int);
void Display_Linked_List(struct node *);
void Reverse_Linked_List(struct node **);


void Reverse_Linked_List(struct node **head)
{
    struct node *temp1=NULL,*temp2=NULL;

    temp1=(*head);
    temp2=(*head)->next;
    temp1->next=NULL;
    while(temp2)
    {
        
      temp1=temp2;
        temp2=temp1->next;
        temp1->next=(*head);
        (*head)=temp1;
    }

}

void Display_Linked_List(struct node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

void Insert_Last_Linked_List(struct node **head,int data)
{
    struct node *temp=NULL,*temp2=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    temp2=(*head);
    if(temp==NULL)
    {
        printf("\nMemory Error\n");
    }
    else
    {
        if(*head==NULL)
        {
            *head=temp;
        }
        else
        {
            while(temp2->next!=NULL)
            {
                temp2=temp2->next;
            }
            temp2->next=temp;
        }
        
    }
    
}

int main()
{
    struct node *head=NULL;

    Insert_Last_Linked_List(&head,10);
    Insert_Last_Linked_List(&head,20);
    Insert_Last_Linked_List(&head,30);
    Insert_Last_Linked_List(&head,40);
    Insert_Last_Linked_List(&head,50);
    Insert_Last_Linked_List(&head,60);
    printf("Orignal Linked List:");
    Display_Linked_List(head);

    printf("After Reverese Linked List:");
    Reverse_Linked_List(&head);
    Display_Linked_List(head);

    return 0;
}