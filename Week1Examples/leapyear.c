//is leapyear
//return bool
//accepts int
//every 4 years
//not divisible 100
//however is if divisible by 400

// && year%100!=0 && year%400=0

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year = get_int("Year: ");
    if (year%4==0 && year%100!=0 && year%400==0)
    {
        printf("True");
    }else printf("False");
}

