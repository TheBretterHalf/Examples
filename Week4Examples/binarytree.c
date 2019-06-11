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
    NODE *trav = rootNode;
    while(1)
    {
        if (newNode->value < trav->value)
        {
            if(trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav->low;
            //restart the loop
            continue;
            return;
        }
        else
        {
            if(trav->high == NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;

        }

    }
}

void displayTreeOnEnter(NODE *curNode)
{
    //printf("%i, ", curNode->value);
    if (curNode->low != NULL)
    {
        displayTreeOnEnter(curNode->low);
    }
    if (curNode->high)
    {
        displayTreeOnEnter(curNode->high);
    }
}

void displayTreeOnDeparture(NODE *curNode)
{
    //4, 7, 6, 5, 9, 8, 13, 18, 20, 17, 15, 10
    //doesnt print node until the child prints itself first
    //printf("%i, ", curNode->value);
    if (curNode->low != NULL)
    {
        displayTreeOnDeparture(curNode->low);
    }

    if (curNode->high != NULL)
    {
        displayTreeOnDeparture(curNode->high);
    }
    //printf("%i, ", curNode->value);
}
int doesContain(int value)
{
    //printf("%i, ", curNode->value);
    NODE *curNode = rootNode;
    if(rootNode->value == value)
    {
        printf("Match");
        return 0;
    }
    //printf("%i", curNode->low->value);
    if (curNode->low->value != value)
    {
        //printf("No Match");
        displayTreeOnEnter(curNode->low);
        //printf("%i", curNode->low->value);
    }
    if (curNode->high->value != value)
    {
        //printf("No Match");
        displayTreeOnEnter(curNode->high);
        //printf("%i", curNode->low->value);
    }
    printf("Match");
    return 0;

}

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

    //displayTreeOnEnter(rootNode);
    //displayTreeOnDeparture(rootNode);
    doesContain(6);
    printf("\n");
}

//MVP, get 8 and 15 working.
//get others working as well to