#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.7;

    printf("ceil: %.0lf\n", ceil(x));
    printf("floor: %.0lf\n", floor(x));
    printf("fmod: %.2lf\n", fmod(x, 2));
    printf("pow: %.0lf\n", pow(2, 3));
    printf("sqrt: %.2lf\n", sqrt(9));

    return 0;
}
