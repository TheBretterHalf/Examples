#include <stdio.h>
#include <stdlib.h>

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
}

void displayTreeOnEnter(NODE *curNode)
{}

void displayTreeOnDeparture(NODE *curNode)
//hashtable

int main (void)
{
    //printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(19);
    addNode(20);
}

//MVP, get 8 and 15 working.
//get others working as well to