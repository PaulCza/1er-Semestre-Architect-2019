/*
** EPITECH PROJECT, 2019
** scaling.c
** File description:
** daz
*/

#include "my.h"

void display_scaling(float *result, float *trans, vec new,
                     vec og)
{
    printf("Scaling by factors %.0f and %.0f\n", new.x, new.y);
    printf("%.2f %.2f %.2f\n", trans[0], trans[1], trans[2]);
    printf("%.2f %.2f %.2f\n", trans[3], trans[4], trans[5]);
    printf("%.2f %.2f %.2f\n", trans[6], trans[7], trans[8]);
    printf("(%.2f, %.2f) =>", og.x, og.y);
    printf(" (%.2f, %.2f)\n", result[0], result[1]);
}

int test_scaling(vec original, float c, float d)
{
    float vec1[3][1];
    vec new;
    vec1[0][0] = original.x;
    vec1[1][0] = original.y;
    vec1[2][0] = 1;
    float trans[3][3] = {
        {c, 0, 0},
        {0, d, 0},
        {0, 0, 1}
    };
    float result[3][1];
    result[0][0] = (vec1[0][0] * trans[0][0])
        + (vec1[1][0] * trans[0][1]) + (vec1[2][0] * trans[0][2]);
    result[1][0] = (vec1[0][0] * trans[1][0])
        + (vec1[1][0] * trans[1][1]) + (vec1[2][0] * trans[1][2]);
    result[2][0] = 1;
    new.x = c;
    new.y = d;
    display_scaling(result, trans, new, original);
}
int start_scaling(char *str, char *str2, vec og)
{
    float a, b;

    check_number(str);
    check_number(str2);
    a = atof(str);
    b = atof(str2);
    test_scaling(og, a, b);
    return 0;
}
