/*
 * Program semp2p2.c for the seminar of the 13th of November, 2018.
 *
 * Programming Language: ISO/IEC 9899:1990
 *
 * Author: Rafail Karkanis
 * e-mail: rkarkanis@uth.gr
 */

#include <stdio.h>

#define N 10

/*
 * main: Prints the store location, and value of a pointer q
 *       that points to the first element of a double array a.
 *
 *       Then the value of the variable that the pointer q points to.
 *
 *       Prints the same for pointer p that points to q.
 *
 *       Prints the address of the first element of the array a.
 *       Prints the value of the said first element.
 *
 *       Prints the values of the array.
 *
 *       Uses q to indirectly change the value of the array element
 *       it points to, and shows the results
 *       by printing again the value of the array elements.
 */
int main(void)
{
    int i;
    double a[N] = {46., -32., 157., 27., 44., 44., 72., 751., 23., 64.};
    double *p = &a[0];        /* Declaring/Initializing pointer variable p. */
    double *q = p;            /* Pointer q points wherever p points to */

    printf("\n%-8s%8X\t%s", "&q:", &q, "store location of q");
    printf("\n%-8s%8X\t%s", " q:", q, "value of q");  
    printf("\n%-8s%8.2lf\t%s", "*q: ", *q,
                            "value of the (double) variable pointed by q");
    printf("\n");
    printf("\n%-8s%8X\t%s", "&p:", &p, "store location of p");
    printf("\n%-8s%8X\t%s", " p:", p, "value of p");  
    printf("\n%-8s%8.2lf\t%s", "*p: ", *p,
                            "value of the (double) variable pointed by p");
    printf(                                                              "\n\n"
           "Note that q and p have different store locations,"              "\n"
           "yet point to the same object."
                                                                         "\n\n"
    );


    printf("\n%-8s%8X\t%s", "&a[0]:", &a[0], "store location of a[0]");
    printf("\n%-8s%8.2lf\t%s", " a[0]:", a[0],
                            "value of the (double) variable pointed by p");

    printf("\n\n\n");
    for (i = 0; i < N; i++)
        printf("%-.2lf  ", a[i]);

    *q = 7.0;

    printf("\n\n*q = 7.0;");

    printf("\n\n");
    for (i = 0; i < N; i++)
        printf("%-.2lf  ", a[i]);
    printf("\n");

    return 0;
}

