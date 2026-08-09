#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void InsertBeg(){
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));

    if(newNode==NULL){
        printf("\nOVERFLOW");
    }
    else{
        int element;
        printf("Enter a Element : ");
        scanf("%d",&element);
        newNode->data=element;
        newNode->next=head;
        head=newNode;
    }
}
void Show(){
    struct Node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Nothing to Print");
    }
    while(ptr!=NULL){
        printf("\nElement : %d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int choice;

    do
    {
        printf("\nChoose The Option...\n");
        printf("1. Insert At Beginning\n");
        printf("2. View Linked List\n");
        printf("3. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                InsertBeg();
                break;

            case 2:
                Show();
                break;

            case 3:
                printf("Program Ended...\n");
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}