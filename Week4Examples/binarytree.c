#include <stdio.h>
#include <stdlib.h>
//testing framework gives access to assert function tests if item inside of function brackets is true
#include <assert.h>

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
    NODE *curNode = rootNode;
    while(1)
    {
        if (curNode->value == value)
        {
            printf("Match\n");
            return 1;
        }
        if (curNode->value > value)
        {
            //printf("%i\n", curNode->value);
            if (curNode->low == NULL)
            {
                return 0;
            }
            curNode = curNode->low;
            continue;
            //return 0;
        }
        //printf("%i\n", curNode->value);
        if (curNode->high == NULL)
        {
            return 0;
        }
        curNode = curNode->high;
        continue;
        //return 0;
    }
}

void tests ()
{

    //assert(doesContain(10) && "tree does contain 10");

}

void freeListSelf()
{
    while(rootNode->low!=NULL && rootNode->high!=NULL)
    {
        NODE *trav = rootNode;
        while (trav->low->low !=NULL || trav->low->high !=NULL)
        {
            if (trav->low->low !=NULL)
            {
                trav = trav->low;
            }
            if (trav->low->high!=NULL)
            {
                trav= trav->low;
            }
        }
        free(trav->low);
        trav->low = NULL;
    }
    free(rootNode);

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
    freeListSelf();
    //assert(doesContain(10) && "tree does contain 10");

    //displayTreeOnEnter(rootNode);
    //displayTreeOnDeparture(rootNode);
    doesContain(14);

    printf("\n");
}

//MVP, get 8 and 15 working.
//get others working as well to

// if (trav->high!=NULL && trav->low!=NULL)
//         {
//             //printf("moving through high branch\n");
//             //printf("%i\n", trav->value);
//             trav=trav->high;
//             continue;
//         }
//         if(trav->high==NULL && trav->low!=NULL)
//         {
//             //printf("moving through low branch\n");
//             trav=trav->low;
//             continue;
//         }
//         if(trav->high!=NULL && trav->low==NULL)
//         {
//             trav=trav->high;
//             continue;
//         }
//         if (trav->high==NULL && trav->low==NULL)
//         {
//             printf("%i", trav->value);
//             free(trav);
//             continue;
//         }
//         break;

        // if(trav->low->low==NULL && trav->low->high==NULL)
        // {
        //     printf("%i\n", trav->low->value);
        //     free(trav->low);
        //     trav->low=NULL;
        // }
        // if(trav->high->high==NULL && trav->high->low==NULL)
        // {
        //     printf("%i\n", trav->high->value);
        //     free(trav->high);
        //     trav->high=NULL;
        // }
        // if(trav->high->high!=NULL)
        // {
        //     printf("%i\n", trav->high->value);
        //     trav=trav->high;
        // }
        // if(trav->high->low!=NULL)
        // {
        //     printf("%i\n", trav->high->value);
        //     trav=trav->high;
        // }
        // if(trav->low->low!=NULL)
        // {
        //     //printf("%i\n", trav->low->value);
        //     trav=trav->low;
        // }
        // if(trav->low->high!=NULL)
        // {
        //     //printf("%i\n", trav->low->value);
        //     trav=trav->low;
        // }