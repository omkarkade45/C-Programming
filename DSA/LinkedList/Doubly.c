#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *pre;
    struct Node *next;
    int data;
};
struct Node *head = NULL;
void DeleteLast(){
    if(head==NULL){
        printf("Nothing To Delete");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->pre->next=NULL;
        temp->pre=NULL; //optional
        free(temp);
    }
}
void InsertAtLast()
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else if(head==NULL){
        int ele;
        printf("Enter a Element :");
        scanf("%d", &ele);
        ptr->data = ele;
        ptr->next = NULL;
        ptr->pre = NULL;
        head = ptr;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        if(temp->next==NULL){
        int ele;
        printf("Enter a Element :");
        scanf("%d", &ele);
        ptr->data = ele;
        ptr->pre = temp;
        ptr->next = NULL;
        temp->next=ptr;
        }
    }
}
void InsertBegin()
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        int ele;
        printf("Enter a Element :");
        scanf("%d", &ele);
        ptr->data = ele;
        ptr->next = head;
        ptr->pre = NULL;
        if(head!=NULL){
            head->pre=ptr;
        }
        head=ptr;
    }
}
void DeleteFirst()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("Nothing to Delete");
    }
    else if (head->next == NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        temp = head;
        head = head->next;
        head->pre = NULL;
        free(temp);
    }
}
void show()
{
    struct Node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("Nothing to Print");
    }
    printf("=======List========");
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void InsertAtGiven(){
    int ele,pos,count=1;
    printf("Enter a Position:");
    scanf("%d",&pos);
    struct Node *newNode,*temp;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("\nOVERFLOW");
    }
    if(pos==1){
        InsertBegin();
        return;
    }
    temp=head;
    while(temp!=NULL&&count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp==NULL){
        printf("\n!Invalid Position");
        free(newNode);
        return;
    }
    else{
        printf("Enter a Element :");
        scanf("%d", &ele);
        newNode->data = ele;
        newNode->next=temp->next;
        newNode->pre=temp;
        if(newNode->next != NULL)
        {
            newNode->next->pre = newNode;
        }
        temp->next=newNode;
    }
}
void DeleteAtGiven(){
    if(head==NULL){
        printf("\nNothing To Delete List is empty ");
        return;
    }
    int pos,count=1;
    printf("\nEnter a Position You Want To delete Node :");
    scanf("%d",&pos);
    if(pos==1){
        DeleteFirst();
        return;
    }
    if(pos==0){
        printf("\nInvalid Position");
        return;
    }
    if(head->next==NULL&&pos>1){
        printf("\nOnly one Node is present IN the list ");
        return;
    }
    struct Node *temp;
    temp=head;
    while(temp->next!=NULL&&count<pos){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL&&count==pos){
        DeleteLast();
        return;
    }
    if(temp->next==NULL&&count<pos){
        printf("! Invalid Position");
        return;
    }
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    printf("Node (%d) is deleted from %d ",temp->data,pos);
    free(temp);
}
int main()
{
    int choice;
    do
    {
        printf("\nSelect Option \n");
        printf("1.Insert At Begining\n2.DeleteFrom Begining\n3.show\n4.Insert At Last\n5.Delete At Last\n6.Insert at given\n7.Delete At Given Position\n8.Exit");
        printf("\nEnter Option :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            InsertBegin();
            break;
        case 2:
            DeleteFirst();
            break;
        case 3:
            printf("\n ===== \n");
            show();
            break;
        case 4:
            InsertAtLast();
            break;
        case 5:
            DeleteLast();
            break;
        case 6:
            InsertAtGiven();
            break;
        case 7:
            DeleteAtGiven();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid Option");
            break;
        }
    } while (1);
}