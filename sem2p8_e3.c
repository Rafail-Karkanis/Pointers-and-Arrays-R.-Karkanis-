/*
 * Program semp2p9_e3.c from the seminar of the 13th of November, 2018.
 *
 * A similar exercise was presented by me.
 *
 * Programming Language: ISO/IEC 9899:1990
 *
 * Author: Rafail Karkanis
 * e-mail: rkarkanis@uth.gr
 */

#include <stdio.h>

#define N 10

/*
 * main: Reads an array of a[N] elements
 *       and uses a pointer p that points to array a
 *       to print their sum with:
 *       "The name of an array is the address of its first element"
 *       in mind.
 */
int main(void)
{
    int a[N], sum, *p;

    printf("\nPlease, enter %d values to initialize my array:\n", N);

    p = a;
    while (p < a + N) 
        scanf("%d", p++);

    printf("\n\nI shall now compute their sum!");

    sum = 0;
    p = a;
    while (p < a + N) 
        sum += *p++;

    printf("\n\nIt is %d!\n", sum);

    return 0;
}