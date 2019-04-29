#include <cs50.h>
#include <stdio.h>
//this is where the function is being declared
//function can be defined whereever in the code as long it is being defined later in the function
void printSum(void);

int main(void)
{
    printf("Hello World");
    printSum();
}
//non returning funtion
//as long as code is above the printSum funtion will run, below it will not
//this is where the function is being defined
void printSum(void)
{
    printf("1+2 =%i\n", 1+2);
}
//run style50 file name to check it against style