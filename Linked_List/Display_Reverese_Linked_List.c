#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void Insert_first_linked_list(struct node **,int);
void Display_Linked_List(struct node *);
void Display_Reversed_Linked_List(struct node *);


void Display_Reversed_Linked_List(struct node *head)
{
    if(!head)
    {
        return ;
    }
    else{
        Display_Reversed_Linked_List(head->next);
        printf("%d ",head->data);
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

void Insert_first_linked_list(struct node **head,int data)
{
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    if(temp==NULL)
    {
        printf("\nMemory Error..\n");
    }
    else
    {
        if(*head==NULL)
        {
            *head=temp;
        }
        else
        {
            temp->next=(*head);
            (*head)=temp;
        }
    }

}


int main()
{
    struct node *head=NULL;

    Insert_first_linked_list(&head,10);
    Insert_first_linked_list(&head,20);
    Insert_first_linked_list(&head,30);
    Insert_first_linked_list(&head,40);
    Insert_first_linked_list(&head,50);

    printf("Orignal Linked List:");
    Display_Linked_List(head);

    printf("Display Reversed Linked List:");
    Display_Reversed_Linked_List(head);
    printf("\n");
    return 0;
}