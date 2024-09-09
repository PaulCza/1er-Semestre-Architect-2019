/*
** EPITECH PROJECT, 2019
** helper
** File description:
** sdad
*/

#include "my.h"
int check_number(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0'){
        if (str[a] >= 48 && str[a] <= 57 || str[a] == '-'){
            a = a + 1;
        } else {
            exit(84);
        }
    }
    return 0;
}

void helper(void)
{
    printf("USAGE\n");
    printf("    ./102architect x y transfo1 arg11 [arg12] [arg13] [transfo2 arg12 [arg22] [arg23]] ...\n");
    printf("\n");
    printf("DESCRIPTION\n");
    printf("    x  abscissa of the original point\n");
    printf("    y  ordinate of the original point\n");
    printf("    z  i don't know, of the original point\n\n");
    printf("    transfo arg1 [arg2] [arg3]\n");
    printf("    -t i j e translation along vector (i, j, e)\n");
    printf("    -z m n f scaling by factors m (x-axis) and n (y-axis) and f (z-axis)\n");
    printf("    -r d   rotation centered");
    
}
