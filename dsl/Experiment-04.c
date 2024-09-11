#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* createNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    return node;
}

void listTraversal(struct node* start){
    struct node* temp = start;
    if(start == NULL){
        printf("List is empty.\n");
    }
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* insertAtStart(struct node* start){
    int data;
    printf("Enter the data to insert: ");
    scanf("%d", &data);
    struct node* temp = createNode(data);
    temp->next = start;
    return temp;
}

struct node* reverseLinkedList(struct node* start){
    
}

int main(int argc, char const *argv[])
{
    struct node* start;
    printf("1.Insert\n 2.Display\n 3.Reverse\n 4.Exit\n");
    while (1)
    {
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = insertAtStart(start);
            break;
        case 2:
            listTraversal(start);
            break;
        case 3:
            /* code */
            break;
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}
