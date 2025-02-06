#include <stdio.h>

double fahrenheitToKelvin(double fahrenheit);

int main(void) {
    printf("%.3f\n", fahrenheitToKelvin(123));
    printf("%.3f\n", fahrenheitToKelvin(76));
    printf("%.3f\n", fahrenheitToKelvin(0));
    printf("%.3f\n", fahrenheitToKelvin(89));

    return 0;
}


double fahrenheitToKelvin(double fahrenheit) {
    return (((fahrenheit - 32) * 5 / 9) + 273.15);
}
//$`K = \frac{(F - 32) \times 5}{9} + 273.15`$