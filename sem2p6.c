/*
 * Program semp2p6.c from the seminar of the 13th of November, 2018.
 *
 * Programming Language: ISO/IEC 9899:1990
 *
 * Author: Rafail Karkanis
 * e-mail: rkarkanis@uth.gr
 */

#include <stdio.h>

#define N 10

/*
 * main: Initializes an int array a[N], a pointer p that points to a.
 *       Prints the addresses of a's elements and its values.
 *
 *       Prints the results of all possible postfix and prefix increments of p
 */
int main(void)
{
    int a[N] = {5, 7, -8, 32, 45, 8209, 14, 0, -847, 9};
    int *p;
    int i;

    printf(                                                             "\n\n"
           "The indirection (*) and increment (++) operator"              "\n"
           "have the same precedence and right assosiativity."            "\n"
           "So:"                                                        "\n\n"
           "*p++ == *(p++)"                                               "\n"
           "(*p)++ == can't change that."                                 "\n"
           "*++p == *(++p)"                                               "\n"
           "++*p == ++(*p)"                                               "\n"
    );

    printf("\n");
    for (i = 0; i < N; i++) 
        printf("\n&a[%d]: %X with: %4d", i, &a[i], a[i]);

    printf("\n\n");
    for (p = &a[0]; p < &a[N]; p++) 
        printf("%-4d   ", *p);
    p = &a[4];
    printf("\n\np = &a[4]");
    printf("\n1.  p: %X", p);
    printf("\n2. *p: %d", *p);
    printf("\n3.  p: %X whilst *p++ is %-4d", p, *p++);
    printf("\n4.  p: %X", p);
    printf("\n5. *p: %d", *p);

    printf("\n\n");
    for (p = &a[0]; p < &a[N]; p++)
        printf("%-4d   ", *p);
    p = &a[6];
    printf("\n\np = &a[6]");
    printf("\n1.  p: %X", p);
    printf("\n2. *p: %d", *p);
    printf("\n3.  p: %X whilst (*p)++ is %-4d", p, (*p)++);
    printf("\n4.  p: %X", p);
    printf("\n5. *p: %d", *p);

    printf("\n\n");
    for (p = &a[0]; p < &a[N]; p++)
        printf("%-4d   ", *p);
    p = &a[2];
    printf("\n\np = &a[2]");
    printf("\n1.  p: %X", p);
    printf("\n2. *p: %d", *p);
    printf("\n3.  p: %X whilst *++p is %-4d", p, *++p);
    printf("\n4.  p: %X", p);
    printf("\n5. *p: %d", *p);

    printf("\n\n");
    for (p = &a[0]; p < &a[N]; p++)
        printf("%-4d   ", *p);
    p = &a[8];
    printf("\n\np = &a[8]");
    printf("\n1.  p: %X", p);
    printf("\n2. *p: %d", *p);
    printf("\n3.  p: %X whilst ++*p is %-4d", p, ++*p);
    printf("\n4.  p: %X", p);
    printf("\n5. *p: %d", *p);

    printf("\n");

    return 0;
}