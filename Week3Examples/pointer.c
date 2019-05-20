#include <cs50.h>
#include <stdio.h>

int add (int x, int y)
{
    return x + y;
}
int modifier(int* x, int y)
{
    //go to where x is pointing and add that value
    *x+=7;

    //adds 7 to the total
    return *x + y;
    //modifying the instance of the variable not the actual variable
    //make x "point" at a
}

int main (void)
{
    int a = 5;

    int b = 13;
    //printf("hello\n");
    printf("The total is %i\n", add(a,b));
    printf("The modified adder is %i\n", modifier(&a,b));
    printf("Running normal add again: %i\n", add(a,b));

    int* intPointer = &b;
    //int *intPointer = &b; is the same as the above line
    //if you just give varible in * it just gives you the variable.  int* is now storing an address not a data type
    //returns ox 321
    //if you follow that address you will find four bytes and get an int
    //char* charPointer =
    // printf("Now b is %p\n", intPointer);
    // printf("b is %i\n", b);
    // intPointer += 4;
    // //changes the actual value rather than the address
    // printf("Now b is %p\n", intPointer);
}