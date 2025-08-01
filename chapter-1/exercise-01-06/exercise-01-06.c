#include <stdio.h>

/* exercise 1.6
    verifying that the expression getchar() != EOF is 0 or 1 
    depending on the compiler that you`re using, you may get some warnings
    due to missing parentheses in the condition */

main()
{
    int c;

    while(c = getchar() != EOF)
        /* using putchar(c) won't display the integer value (0 or 1) 
            depending on your shell config, you may get one extra output for LF */
        printf("at loop -> [%d]\n", c);
    printf("reached EOF -> [%d]\n", c);
}
