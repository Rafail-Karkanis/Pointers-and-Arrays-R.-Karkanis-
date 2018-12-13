/*
 * Program semp2p4.c for the seminar of the 13th of November, 2018.
 *
 * Programming Language: ISO/IEC 9899:1990
 *
 * Author: Rafail Karkanis
 * e-mail: rkarkanis@uth.gr
 */

#include <stdio.h>

#define N 10

/*
 * main: Subtracts char pointers ptr1 and ptr2
 *       that point to different positions
 *       of a char array a[N] and displays the results,
 *       which is the distance of the pointed positions.
 *
 *       Compares ptr1 and ptr2 and prints the results.
 */
int main(void)
{
    char a[N] = "Hello";
    char *ptr1 = &a[2];      /* Declaring/Initializing pointer variable ptr1 */
    char *ptr2 = &a[4];      /* Initializing ptr2 to another position
                                of the same array */

    /* 
     * We can measure the distance of 2 pointers of an array.
     * 
     * Yet, adding them produces an error: '+' : cannot add two pointers
     */
    printf("\nWe can even measure the distance of 2 pointers:\n");
    printf("\nDistance: (ptr1 - ptr2) = %2d", ptr1 - ptr2);
    printf("\nDistance: (ptr2 - ptr1) = %2d", ptr2 - ptr1);


    /* 
     * We can also compare 2 pointers.
     * (Comparing pointers of different arrays is legal--yet peculiar)
     */

    if (ptr1 > ptr2)
        printf("\n\nptr1 > ptr2");
    else
        printf("\n\nptr1 <= ptr2");

    printf("\n");

    return 0;
}

