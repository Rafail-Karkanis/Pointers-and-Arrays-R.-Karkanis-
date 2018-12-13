/*
 * Program semp2p1.c for the seminar of the 13th of November, 2018.
 *
 * Programming Language: ISO/IEC 9899:1990
 *
 * Author: Rafail Karkanis
 * e-mail: rkarkanis@uth.gr
 */

#include <stdio.h>

#define N 10

/*
 * main: Prints the store location, and value of the pointer p
 *       which points to the first element of integer array a.
 *
 *       Prints the store location of the first element of the array a.
 */
int main(void)
{
    int i;
    int a[N];      
    int *p;        /* Declaring pointer variable p. */

    p = &a[0];     /* p now points to the first element of array a */


    printf("\n%-8s%X\t%s", "&p:", &p, "store location of p");
    printf("\n%-8s%X\t%s", " p:", p, "value of p");  
    printf("\n%-8s%X\t%s", "&a[0]:", &a[0], "store location of a[0]");

    printf(                                                              "\n\n"
           "As expected, p is equal with the address"
                                                                           "\n"
           "of the first element of the array a."
                                                                         "\n\n"
           "Note that I haven't tried to access *p (nor a[0]),"            "\n"
           "since a[0] is uninitialized. "                               "\n\n"
    );

    return 0;
}

