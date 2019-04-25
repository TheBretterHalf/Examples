
#include <cs50.h>
//alphabetical
#include <stdio.h>

//int auto returns itself
//void similar to null, not sending any information
// int main (void)
// {
//     //print format
//     //needs quotes not single quotes
//     //single quotes will send ascii value to the code
//     //clang compiles the language, makes an a.out file
//     //\ escapes the flow of the code and overides the standard behavior of that code
//     //so the \n escapes the flow of the "" and allows you to access the property of the n character
//     //make does both
//     //clang test.c -o hello will allow you to customize the output
//     //make -[file name] will return the excecutable code
//     printf("Hello, World\n");
// }
int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}