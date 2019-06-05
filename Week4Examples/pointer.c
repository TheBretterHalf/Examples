#include <stdio.h>
#include <stdlib.h>

// struct called node containing
//  an int identified as 'value',
//  a reference to another node identified as 'next'

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

//
NODE *rootNode;

int add(int *x, int y)
{
    *x += 3;
    return *x + y;
}

// iterate through the linked list until you get to the end
// once at end print out last value
// once at the end add the new node to the list

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;

    if(rootNode==NULL)
    {
        rootNode = newNode;
        return;
    }

    NODE *trav = rootNode;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = newNode;
    // while(true)
    // {
    //     if (trav->next == NULL)
    //     {
    //         NODE *newNode = malloc(sizeof(NODE));
    //         newNode->value = value;
    //         newNode->next = NULL;
    //         trav->next = newNode;
    //         break;
    //     }
    //     else
    //     {
    //         trav = trav->next;
    //         // printf("moved deeper\n");
    //     }
    // }

}

void removeNode(int value)
{
    //if empty list will crash
    NODE *trav = rootNode;
    if (rootNode->value == value)
    {
        rootNode = rootNode->next;
        free(trav);
        return;
    }
    while (trav->next->value != value)
    {
        trav = trav->next;
    }
    NODE *temp = trav->next;
    //trav->next = temp-> next; same code
    trav->next = trav->next->next;
    free (temp);

}

void freelist()
{
    //loop through find last item send value to remove node
    //loop through find second to last remove item and set to null until the head remains.
    //recursively iterate through the list to remove all items
}

void displayList()
{
    //should display
    // 5, 10, 8, 17

    NODE* trav=rootNode;
    while(trav->next != NULL)
    {
        printf("%i, ", trav->value);
        trav = trav->next;
    }
    printf("%i\n", trav->value);
}

int main(void)
{
    // NODE rootNode;
    // rootNode.value = 5;
    // rootNode.next = NULL;
    addNode(5);
    addNode(10);
    addNode(8);
    addNode(17);
    removeNode(8);
    displayList();
    //free(rootNode );

    // printf("%i\n%i\n", rootNode.next->next->value, rootNode.next->next->next->value);

    // int a = 5;
    // int b = 10;
    // printf("the total is: %i\n", add(&a, b));
    // printf("the total is: %i\n", add(&a, b));
    // int* intPointer;
    // intPointer = &b;
    // printf("b is: %i\n", b);
    // *intPointer = 47;
    // printf("b is %i\n", b);
}

free(rootNode);