#include <cs50.h>
#include <math.h>
#include <stdio.h>

int sthour;
int hour;

int main(void)
{
    do
    {
        sthour = get_int("Starting Hour: ");
        hour = get_int("Hours passed: ");
    }
    while (sthour > 12);
    if (hour < 0)
    {
        int hoursneg = (sthour + (hour % 12)) + 12;
        if (hoursneg == 0)
        {
            printf("The time is 12\n");
        }
        else
        {
            printf("The time is %i\n", hoursneg);
        }
    }
    else
    {
        int hours = (sthour + hour) % 12;
        if (hours == 0)
        {
            printf("The time is 12\n");
        }
        else
        {
            printf("The time is %i\n", hours);
            int revolutions = (sthour + hour) / 12;
            printf "Number of Clock Revolutions %i\n", revolutions);
        }
    }
}