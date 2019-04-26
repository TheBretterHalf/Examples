
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
// int main(void)
// {
//     //% a placeholder s is identifying it as a string
//     //order of the percent symbols is the order of the variables trailing
//     //common syntax of c uses small case as a standard but uses camel case going forward
//     string name = get_string("What is your name?\n");

//     printf("hello, %s\n", name);
// }

int main (void)
{
    string gender = get_string("Mr or Mrs?\n");
    string firstname = get_string("What is your first name?\n");
    string lastname = get_string("What is your last name?\n");

    printf("Hello %s %s, %s\n", gender, lastname, firstname);
}