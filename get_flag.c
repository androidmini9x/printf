#include "main.h"
#include <stdio.h>

/**
 * handle_flags - Matches flags with corresponding values.
 * @flag: A pointer to a potential string of flags.
 * Return: If flag characters are matched - a corresponding value.
 *         Otherwise - 0.
 */

void handle_flags(char flag)
{
    switch(flag)
    {
        case '+':
            printf("Flag +: Show the sign for both positive and negative numbers.\n");
            break;
        case ' ':
            printf("Flag space: Leave a space before positive numbers.\n");
            break;
        case '#':
            printf("Flag #: Alternate form of conversion.\n");
            break;
        case '0':
            printf("Flag 0: Pad the field width with zeros.\n");
            break;
        case '-':
            printf("Flag -: Left-justify within the field width.\n");
            break;
    }
}

int main()
{
    handle_flags('+');
    handle_flags(' ');
    handle_flags('#');
    handle_flags('0');
    handle_flags('-');

    return 0;
}
