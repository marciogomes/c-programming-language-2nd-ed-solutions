#include <stdio.h>

#define NOT_IN_BLANK    0
#define IN_BLANK        1

/* exercise 1.9
    write a program to copy its input to its output,
    replacing multiple blanks with a single blank
    NOTE: the else statement and && operator was only introduced in section 1.5.4 */

main()
{
    int c, inBlankFlag;
    inBlankFlag = NOT_IN_BLANK;
    
    while((c = getchar()) != EOF) {
        if(c != ' ') {
            putchar(c);
            inBlankFlag = NOT_IN_BLANK;
        }
        if(c == ' ') {
            if(inBlankFlag == NOT_IN_BLANK) {
                putchar(c);
                inBlankFlag = IN_BLANK;
            }
        }
    }
}