#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(){
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("\nOverFlow");
    }
    else{
        int element;
        printf("\nEnter a element :");
        scanf("%d",&element);
        ptr->data=element;
        ptr->next=head;
        head=ptr;
        printf("Inserted Item");
    }
}
void lastinsert()
{
    struct Node *ptr,*temp;
    int item;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("\nEnter Value: ");
        scanf("%d",&item);
        ptr->data=item;

        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("Item inserted\n");
        }
        else
        {
            temp=head;
            while(temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("Item Inserted\n");
        }
    }
}
void show(){
    struct Node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Nothing to be Print linked list is empty");
    }
    else{
        printf("\nprinting Elements ......\n");
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main(){
    int choice=0;
    while(choice!=5){
    printf("\n1.Insert Item");
    printf("\n2.show ");
    printf("\n3.Insert At Last");
    printf("\n4.Exit");
    printf("\nEnter a choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        Insert();
        break;
    case 2:
        show();
        break;
    case 3:
        lastinsert();
        break;
    case 4:
       exit(0);
       break;
    default:
        printf("Invalid Choice !");
        break;
    }   
    }
}