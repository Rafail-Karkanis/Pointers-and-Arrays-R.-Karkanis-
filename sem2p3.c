/*
 * Program semp2p3.c for the seminar of the 13th of November, 2018.
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
 *       that points to the first element of a float array a.
 *
 *       Prints the array a and the address of each of its elements.
 *
 *       Adds and subtracts an integer value from the pointer p
 *       and indirectly changes a value of array a.
 *       Shows the results by printing again the information of p and a.
 */
int main(void)
{
    int i;
    float a[N] = {46.f, -32.f, 157.f, 27.f, 44.f,
                    43., 72.f, 751.f, 23.f, 64.f};
    float *p = &a[0];        /* Declaring/Initializing pointer variable p. */

    printf("\n%-8s%8X\t%s", "&p:", &p, "store location of p");
    printf("\n%-8s%8X\t%s", " p:", p, "value of p");  
    printf("\n%-8s%8.2lf\t%s", "*p: ", *p,
                            "value of the (double) variable pointed by p");  

    printf("\n\n");
    for (i = 0; i < N; i++)
        printf("%-.2lf  ", a[i]);
  
    printf("\n\n");
    for (i = 0; i < N; i++) 
        printf("\nAddress of a[%d]: %X", i, &a[i]);

    printf("\n\n\nWatch.\n\n");
    p += 5;
    printf("p += 5;\n");
    printf("\n%-8s%8X\t%s", "&p:", &p, "store location of p");
    printf("\n%-8s%8X\t%s", " p:", p, "value of p");  
    printf("\n%-8s%8.2lf\t%s", "*p: ", *p,
                            "value of the (double) variable pointed by p");
    
    *p = 974.34f;
    printf("\n\n\n*p = 974.34f;\n");
    printf("\n\n");
    for (i = 0; i < N; i++)
        printf("%-.2lf  ", a[i]);
    printf("\n\nNotice the differences.\n");

    printf("\n\nWatch again.\n\n");
    p--;
    printf("\np--;\n");  
    printf("\n%-8s%8X\t%s", "&p:", &p, "store location of p");
    printf("\n%-8s%8X\t%s", " p:", p, "value of p");  
    printf("\n%-8s%8.2lf\t%s", "*p: ", *p,
                            "value of the (double) variable pointed by p");

    *p = 294.04f; 
    printf("\n\n\n*p = 294.04f;\n");
    printf("\n\n");
    for (i = 0; i < N; i++)
        printf("%-.2lf  ", a[i]);
    printf("\n\nNotice the differences.\n\n");

    p = &a[0];
    printf("%X + 5 * sizeof(float) == %X", p, p + 5);
    /*
     * Pointer arithmetic
     *
     * As you might have noticed p += 5
     * didn't increment the address by 5
     * but by 5 * sizeof(p)
     *
     * This special feature is called Pointer arithmetic.
     */
    printf("\n");

    return 0;
}