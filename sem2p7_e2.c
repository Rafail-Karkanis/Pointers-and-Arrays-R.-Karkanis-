/*
 * Program semp2p7_e2.c from the seminar of the 13th of November, 2018.
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
 *       to print their sum using pointer arithmetic with while loops
 *       and using the increment "tricks" we learnt at sem2p6.c
 */
int main(void)
{
    int a[N], sum, *p, i;
    printf("\n&a[0]: %X\n", &a[0]);
    printf("\nPlease, enter %d values to initialize my array:\n", N);

    p = &a[0];
    while (p < &a[N]) {
        scanf("%d", p++);
        printf("\np now points to %X", p);
    }

    /*
     * We could have written:
     *
     * for (i = 0; i < N; i++)
     *     scanf("%d", &a[i]);
     *
     * Also, note that since p already holds an address we don't use &p
     */


    printf("\n\nI shall now compute their sum!");

    /*
     * We could have written:
     *
     * sum = 0;
     * for (i = 0; i < N; i++)
     *     sum += a[i];
     */
    sum = 0;
    p = &a[0];
    while (p < &a[N])
        sum += *p++;

    /*
     * Note than even though &a[N] doesn't exist,
     * since a[0], a[1], ..., a[N-1]
     * It's perfectly fine to use it, as we don't attempt to examine it's value
     */

    printf("\n\nIt is %d!", sum);

    printf("\n\nSee ya!\n");
}