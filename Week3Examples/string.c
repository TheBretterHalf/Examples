//#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


//all cs50.h is doing for you

void modifyArray (int theArray[])
{
    theArray[2]=44;
    for (int number = 0; number<3; number++)
    {
        printf("The number at %i is %i\n", number, theArray[number]);
    }
}

int main (void)
{
    char* name = "Cliff";
    for (int i = 4; i>=0; i--)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    //printf("Hello, %s\n", name);

    // int anArray[]={28, 32, 29};
    // printf("position 2 is %i\n", anArray[1]);
    // printf("position 3 is %i\n", anArray[2]);

    //anArray will return location of storage
    //so anArray[2]

    //into formula:
    //Array address + (size of (type)*index)

    // int* anotherArray = malloc(sizeof(int)*3);
    // //allocate me some memory size of 3 integers
    // anotherArray[0] = 3;
    // anotherArray[1] = 8;
    // anotherArray[2] = 77;
    // modifyArray(anotherArray);
    // printf("The number at position 3 is %i\n", anotherArray[2]);
}