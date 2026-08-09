#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Print(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=first;

    first->data=11;
    first->next=second;

    second->data=17;
    second->next=third;

    third->data=19;
    third->next=NULL;
    Print(head);
}
