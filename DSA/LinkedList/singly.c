#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void DeleteFromBeg(){
    struct Node *temp;
    temp=head;
    if(head==NULL){
        printf("\nNothing To Delete List is Empty");
        return;
    }
    else{
        head=head->next;
        printf("\n%d Node is Deleted ",temp->data);
        free(temp);
    }
}
void DeleteFromLast(){
    if(head==NULL){
        printf("\nNothing To Delete list is Empty");
        return;
    }
    if(head->next==NULL){
        printf("\n%d Node is Delete",head->data);
        free(head);
        head=NULL;
        return;
    }
    else{
        struct Node *temp=head;
        struct Node *pre=NULL;
        while(temp->next!=NULL){
                pre=temp;
                temp=temp->next;
            }
        pre->next=NULL;
        printf("\n%d Node id Deleted",temp->data);
        free(temp);
    }
}
void DeleteFromGiven(){
    if(head==NULL){
        printf("\nNothing to delete list is empty");
        return;
    }
    int pos,count=1;
    printf("\nEnter a Position To delete Node :");
    scanf("%d",&pos);
    if(pos==1){
        DeleteFromBeg();
        return;
    }
    struct Node *temp=head;
    struct Node *pre=NULL;
    while(temp!=NULL&&count<pos){
        count++;
        pre=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\n! Invalid Postion");
        return;
    }
    printf("\n%d Node is Deleted from %d location",temp->data,pos);
    pre->next=temp->next;
    free(temp);
}
void InsertAtBegining(){
    int ele;
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("OVERFLOW\n");
        return;
    }
    else{
        printf("Enter a Element :");
        scanf("%d",&ele);
        newNode->data=ele;
        newNode->next=head;
        head=newNode;
    }
    printf("\nNode Inserted ...");
}
void InsertLast(){
    if(head==NULL){
        InsertAtBegining();
        return;
    }
    int ele;
    struct Node *newNode,*temp;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("OVERFLOW\n");
        return;
    }
    else{
        printf("Enter a Element :");
        scanf("%d",&ele);
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->next==NULL){
            newNode->data=ele;
            newNode->next=NULL;
            temp->next=newNode;
        }
        printf("\nNode Inserted ...");
    }
}
void InsertAtGivenPos(){
//     struct Node *temp,*demo;
//     int count=1;
//     int pos;
//     printf("\nEnter a Node Postion");
//     scanf("%d",&pos);
//     temp=head;
//     if(pos==1){
//             InsertAtBegining();
//         }
//         else {
//             while(temp!=NULL){
//         demo=temp;
//         temp=temp->next;
//         if(count==pos){
//             int ele;
//             struct Node *newNode; 
//             newNode=(struct Node *)malloc(sizeof(struct Node));
//             printf("Enter a Element :");
//             scanf("%d",&ele);
//             demo->next=newNode;
//             newNode->data=ele;
//             newNode->next=temp;
//             break;
//         }
//         count++;
//     }
//  }
    int ele,pos,count=1;
    printf("\nEnter a Position :");
    scanf("%d",&pos);
    if(pos<=0){
        printf("\nInvalid Position");
        return;
    }
    if(pos==1){
        InsertAtBegining();
        return;
    }
    struct Node *newNode,*temp;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("\nOVERFLOW");
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
        printf("\nEnter a Element :");
        scanf("%d",&ele);
        newNode->data=ele;
        newNode->next=temp->next;
        temp->next=newNode;
        printf("\nNode Inserted ....");
    }
}
void show()
{
    struct Node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("Nothing to Print");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main(){
    int choice;
    do{
        printf("\nChoose Option .....\n\n");
        printf("1.show\n2.Insert Node At First \n3.Insert Node At Last\n4.Insert at given Position\n5.Delete From Begining\n6.Delete Node From Last\n7.Delete Node From Given Poition\n8.Exit\n");
        printf("\nEnter Option :");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            show();
            break;
        case 2:
            InsertAtBegining();
            break;
        case 3:
            InsertLast();
            break;
        case 4:
            InsertAtGivenPos();
            break;
        case 5:
            DeleteFromBeg();
            break;
        case 6:
            DeleteFromLast();
            break;
        case 7:
            DeleteFromGiven();
            break;
        case 8:
            return 0;
            break;
        default:
            printf("!invalid option");
            break;
        }
    }while(1);
}