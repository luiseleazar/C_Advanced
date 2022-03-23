#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXIT1__ 1

int main()
{
    #ifdef __STDC_NO_COMPLEX__
        printf("Complex numbers are not supported.\n");
        exit(1);
    #else
        printf("Complex numbers are supported\n");

        double complex cx = 1.0 + 3.0*I;
        double complex cy = 1.0 - 4.0*I;

        printf("Working with complex numbers:\n");
        printf("Starting values: cx = %.2f%+.2fi cy = %.2f%+.2fi\n", creal(cx), cimag(cx),creal(cy),cimag(cy));

        double complex sum = cx+cy;
        printf("\nThe sum cx + cy is %.2f%+.2fi",creal(sum), cimag(sum));

        double complex diff = cx-cy;
        printf("\nThe difference cx - cy is %.2f%+.2fi",creal(diff), cimag(diff));

        double complex product = cx*cy;
        printf("\nThe product cx * cy is %.2f%+.2fi",creal(product), cimag(product));

        double complex div = cx/cy;
        printf("\nThe div cx / cy is %.2f%+.2fi",creal(div), cimag(div));

        double complex conjugate = conj(cx);
        printf("\nThe conjugate of cx is %.2f%+.2fi", creal(conjugate), cimag(conjugate));

    #endif // __STDC_NO_COMPLEX__
    return 0;
}
