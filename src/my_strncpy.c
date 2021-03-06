/*
** EPITECH PROJECT, 2020
** MY_STRNCPY.C
** File description:
** copy n chars in another string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
