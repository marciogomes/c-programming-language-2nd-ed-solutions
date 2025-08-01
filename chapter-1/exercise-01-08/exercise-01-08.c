#include <stdio.h>

/* exercise 1.8 
    write a program to count blanks, tabs and newlines
    run with the example.txt file at this same folder */

main()
{
    long c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++nb;
        if(c == '\t')
            ++nt;
        if(c == '\n')
            ++nl;
    }
    printf("nb=%ld; nt=%ld, nl=%ld\n", nb, nt, nl);
}
