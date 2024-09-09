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
    printf("    ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...\n");
    printf("\n");
    printf("DESCRIPTION\n");
    printf("    x  abscissa of the original point\n");
    printf("    y  ordinate of the original point\n\n");
    printf("    transfo arg1 [arg2]\n");
    printf("    -t i j translation along vector (i, j)\n");
    printf("    -z m n scaling by factors m (x-axis) and n (y-axis)\n");
    printf("    -r d   rotation centered in O by a d degree angle\n");
    printf("    -s d   reflection over the axis passing through O with an inclination\n        angle of d degrees\n");
}
