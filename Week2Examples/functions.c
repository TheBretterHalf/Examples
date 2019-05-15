// int getItemIndex(int item, int rmin)
// {
//     return item - rmin;
// }
// int encrypt(int iItem, key)
// {
//     return iItem + Key
// }
// // int getMod (int imin)
// // {
// //     return imin + 1
// // }

// int itemIndex = getItemIndex(item, rmin);
// printf("Item Index: %i\n", itemIndex)
// //item index should be 17
// int encryptedKey = encrypt(itemIndex, key);
// int modifier = imin + 1;
// int returnToRange = rMin;
// int convertedIndex = decrypted % modifier

// convertedIndex + returnToRange

// //(decrypt(getItemIndex(item, rmin),key) % imin + 1 + rmin

#include <cs50.h>
#include <stdio.h>

//function must be declared before it is used
//name of the function, return type, and what parameters the function will take
int total (int a, int b, int c);

int main(void)
{
    printf("Hello\n");
    int result = total(5, 8, 2);
    printf("%i\n", result);
    //writing an item in-line
    printf("%i\n", total(4,4,4));
}

int total (int a, int b, int c)
{
    return a;
}