#include <stdio.h>
#include <ctype.h>
#include "C:\Users\Stiffany\OneDrive\Functions\zodiac.c"

int main() {

    char name[80];
    int bm, bd;

    // Get user name
    printf("Please enter your name: ");
    if (scanf("%s", name) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    // Get birth month
    printf("Input Birth Month: ");
    if (scanf("%d", &bm) != 1 || bm < 1 || bm > 12) {
        printf("Error: Invalid birth month! Must be between 1 and 12.\n");
        return 1;
    }

     // Get birth date
    printf("Input Birth Date: ");
    if (scanf("%d", &bd) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    // Validate birth date based on month
    if ((bm == 2 && bd > 28) ||  
        (bm == 4 && bd > 30) || 
        (bm == 6 && bd > 30) || 
        (bm == 9 && bd > 30) || 
        (bm == 11 && bd > 30) || 
        (bd < 1 || bd > 31)) {
        printf("Error: Invalid birth date for the given month!\n");
        return 1;
    }

    printf("%s's Zodiac Sign: ", name);
    zodiac_sign(bm, bd);

    return 0;
}