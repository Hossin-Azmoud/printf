#include "main.h"
#include <stdio.h>
/**
 * _chop_flags - removes the flags from a format string and returns the total count
 * @s: pointer to the format string to be chopped
 * @idx: current index
 * Return: the index of the first non-flag character in the format string
 */
int _chop_flags(const char *s, int idx)
{
    int count = 0;
    int hash_count = 0;
    int plus_count = 0;
    while (*(s + idx) == '#' || *(s + idx) == '+')
    {
        char flag = *(s + idx);
        if (flag == '#')
        {
            while (*(s + idx + 1) == flag)
            {
                hash_count++;
                idx++;
            }
            hash_count++;
        }
        else
        {
            while (*(s + idx + 1) == flag)
            {
                plus_count++;
                idx++;
            }
            plus_count++;
        }
        idx++;
        count++;
    }
    if (hash_count > 0)
    {
        char hash_count_str[2];
        snprintf(hash_count_str, 2, "%d", hash_count);
        _putchar('#');
        _printf("%s", hash_count_str);
    }
    if (plus_count > 0)
    {
        char plus_count_str[2];
        snprintf(plus_count_str, 2, "%d", plus_count);
        _putchar('+');
        _printf("%s", plus_count_str);
    }
    return idx;
}