#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    //you have to add struct because the typedef has not finished
    struct NODE *low;
    struct NODE *high;
} NODE;

NODE *rootNode;

void addNode (int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    //if value of new node is less the root node attach to low
    //else add to high
    //input while loop to confirm NULL
    while(1)
    {
        if (newNode->value < rootNode->value)
        {
            rootNode->low = newNode;
            return;
        }
        else
        {
            rootNode->high = newNode;
            return;
        }

    }
}

void displayTreeOnEnter(NODE *curNode)
{}

void displayTreeOnDeparture(NODE *curNode)
{}
//hashtable

int main (void)
{
    //printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    // addNode(17);
    // addNode(19);
    // addNode(20);
    addNode(17);
    addNode(20);
    addNode(18);
    addNode(5);
    addNode(6);
    addNode(9);
    addNode(4);
    addNode(13);
    addNode(7);

}

//MVP, get 8 and 15 working.
//get others working as well to