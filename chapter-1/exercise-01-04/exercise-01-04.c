#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -40, -20, ..., 180; floating-point version with table header */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 180;
    step = 20;

    celsius = lower;

    printf("cel\tfahrn\n");
    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%3.0f\t%4.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}