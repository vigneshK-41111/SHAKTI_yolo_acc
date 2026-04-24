#include <stdio.h>
#include <stdint.h>
#include <uart.h>
#include <utils.h>
int main()
{
    float  f1 = 3.141592;
    float  f2 = 1.500023;

    double d1 = 2.718281828459045;
    double d2 = 123.456000024350003;

    float  *pf1 = &f1;
    double *pd1 = &d1;

    printf("\n FLOAT TEST (6 DECIMALS) \n");
    printf("f1 = %f\n", f1);
    printf("f2 = %f\n", f2);

    printf("\n DOUBLE TEST (15 DECIMALS) \n");
    printf("d1 = %.14lf\n", d1);
    printf("d2 = %.14lf\n", d2);

    printf("\n FLOAT ARITHMETIC (6 DECIMALS) \n");
    printf("f1 + f2 = %f\n", f1 + f2);
    printf("f1 - f2 = %f\n", f1 - f2);
    printf("f1 * f2 = %f\n", f1 * f2);
    printf("f1 / f2 = %f\n", f1 / f2);

    printf("\n DOUBLE ARITHMETIC (15 DECIMALS) \n");
    printf("d1 + d2 = %.14lf\n", d1 + d2);
    printf("d2 - d1 = %.14lf\n", d2 - d1);
    printf("d1 * d2 = %.14lf\n", d1 * d2);
    printf("d1 / d2 = %.14lf\n", d1 / d2);

    printf("\n POINTER TEST \n");
    printf("*pf1 (float ptr)  = %f\n", *pf1);
    printf("*pd1 (double ptr) = %.14lf\n", *pd1);


    float fx = 0.123456f;
    double dx = 0.123456789012345;

    printf("\n PRECISION TESTS (FLOAT 0.1f .. 0.6f) \n");
    printf("fx = %.1f\n", fx);
    printf("fx = %.2f\n", fx);
    printf("fx = %.3f\n", fx);
    printf("fx = %.4f\n", fx);
    printf("fx = %.5f\n", fx);
    printf("fx = %.6f\n", fx);

    printf("\n PRECISION TESTS (DOUBLE 0.7lf .. 0.14lf) \n");
    printf("dx = %.7f\n",  dx);
    printf("dx = %.8f\n",  dx);
    printf("dx = %.9f\n",  dx);
    printf("dx = %.10lf\n", dx);
    printf("dx = %.11lf\n", dx);
    printf("dx = %.12lf\n", dx);
    printf("dx = %.13lf\n", dx);
    printf("dx = %.14lf\n", dx);



    return 0;
}
