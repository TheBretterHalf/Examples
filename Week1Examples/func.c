#include <cs50.h>
#include <stdio.h>
//this is where the function is being declared
//function can be defined whereever in the code as long it is being defined later in the function
void printSum(void);
void printSums(int, int);
int squared(int);

int main(void)
{
    printf("Hello World\n");
    printSum();
    printSums(4,8);
    int threeSquared = squared(3);
    printf("3 squared is: %i\n", threeSquared);
}
int squared(num)
{
    return num*num;
}

//non returning funtion
//as long as code is above the printSum funtion will run, below it will not
//this is where the function is being defined
void printSum(void)
{
    printf("1+2 =%i\n", 1+2);
}
void printSums(x,y)
{
    printf("%i+%i=%i \n", x,y,x+y);
}
//run style50 file name to check it against style