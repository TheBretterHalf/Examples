#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Cliff";
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }
}
