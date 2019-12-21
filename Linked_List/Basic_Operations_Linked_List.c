#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Insert_at_beginning(struct node **,int);
void Display_linked_list(struct node *);
void Deletion(struct node **);
int Search_Node(struct node *,int);
void Delete_Node(struct node **,int);

void Delete_Node(struct node **head,int position)
{
    struct node *temp1=NULL,*temp2=NULL;
    temp1=(*head);
    while(position!=1)
    {
        temp1=temp1->next;
        position--;
    }
    temp2=temp1->next;
    temp1->next=temp2->next;
    temp2->next=NULL;
    free(temp2);
}

int Search_Node(struct node *head,int searchnode)
{
    int position=0;
    while(head)
    {
        if(head->data == searchnode)
        {
            position++;
            break;
        }
        position++;
        head=head->next;
    }
    return position;
}

void Deletion(struct node **head)
{
    struct node *temp=NULL;
    temp=(*head);
    (*head)=temp->next;
    temp->next=NULL;
    free(temp);
}

void Display_linked_list(struct node *head)
{
    printf("\nLinked List:");
    while(head)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

void Insert_at_beginning(struct node **head,int data)
{
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(temp==NULL)
    {
        printf("\nMemory error...");
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
    
    while(1)
    {
        int choice=0;
        int data=0;
        int searchnode=0;
        int deletenode=0;
        printf("\n1.Insertion (Add an element at the beginning):\n2.Deletion (Deletes an element at beginning):\n3.Display (Display Complete list):\n4.Search (Searches an element using the given key):\n5.Delete(Delete ans element using the given key):\n6.Exit");
        
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: //Insertion 
                    printf("\nEnter the data for node:");
                    scanf("%d",&data);
                    Insert_at_beginning(&head,data);
                    break;
            case 2: //Deletion
                    Deletion(&head);
                    break;
            case 3: //Display
                    Display_linked_list(head);
                    break;
            case 4: //Search
                    printf("\nEnter the search node:");
                    scanf("%d",&searchnode);
                    
                    int position=Search_Node(head,searchnode);
                    printf("\n%d is present at position %d\n",searchnode,position);
                    break;
            case 5: //Delete
                    printf("\nEnter the delete node:");
                    scanf("%d",&deletenode);
                    int pos=Search_Node(head,deletenode);
                    Delete_Node(&head,pos-1);     
                    break;
            case 6: //Exit
                    exit(0);       
        } 
    }
}