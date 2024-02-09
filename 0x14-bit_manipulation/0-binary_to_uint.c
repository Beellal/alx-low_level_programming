#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there's one or more chars in the
 *         string b that isn't '0' or '1', or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int num = 0;

        if (!b)
                return (0);

        for (; *b; b++)
        {
                if (*b != '0' && *b != '1')
                        return (0);

                num <<= 1;
                if (*b == '1')
                        num += 1;
        }
        return (num);
}

