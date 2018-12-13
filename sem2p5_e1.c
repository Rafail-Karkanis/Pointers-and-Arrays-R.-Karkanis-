/*
 * Program semp2p5_e1.c from the seminar of the 13th of November, 2018.
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
 *       to print their sum using pointer arithmetic
 */
int main(void)
{
    int a[N], sum, *p;
    printf("&a[0]: %X\n", &a[0]);
    printf("\nPlease, enter %d values to initialize my array:\n", N);


    for (p = &a[0]; p < &a[N]; p++) {
        scanf("%d", p);
        printf("p points to %X and has the value %-3d\n", p, *p);
    }

    /*
     * We could have written:
     *
     * for (i = 0; i < N; i++)
     *     scanf("%d", &a[i]);
     *
     * Also, note that since p already holds an address we don't use &p
     */


    printf("\nI shall now compute their sum!");

    /*
     * We could have written:
     *
     * sum = 0;
     * for (i = 0; i < N; i++)
     *     sum += a[i];
     */
    sum = 0;
    for (p = &a[0]; p < &a[N]; p++)
        sum += *p;    /* risk of overflow */

    /*
     * Note than even though &a[N] doesn't exist,
     * since a[0], a[1], ..., a[N-1]
     * It's perfectly fine to use it, 
     * as we don't attempt to examine it's value.
     */

    printf("\n\nIt is %d!", sum);

    printf("\n\nSee ya!\n");
}