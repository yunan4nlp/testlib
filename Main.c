#include <stdio.h>
#include "Structure.h"

int main() {
    int a = 5;
    int b = 8;
    int c = sum( a, b );

    printf( "sum of %d and %d is %d\n", a, b, c );

		getchar();
    return 0;
}