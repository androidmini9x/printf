#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: 0;
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
        default:
            printf("Invalid flag character.\n");
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
