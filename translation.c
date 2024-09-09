/*
** EPITECH PROJECT, 2019
** translation
** File description:
** dd
*/

#include "my.h"
void display_trans(float *result, float *trans, vec new, vec og)
{
    printf("Translation along vector (%.0f, %.0f)\n", new.x, new.y);
    printf("%.2f %.2f %.2f\n", trans[0], trans[1], trans[2]);
    printf("%.2f %.2f %.2f\n", trans[3], trans[4], trans[5]);
    printf("%.2f %.2f %.2f\n", trans[6], trans[7], trans[8]);
    printf("(%.2f, %.2f) =>", og.x, og.y);
    printf(" (%.2f, %.2f)\n", result[0], result[1]);
}
int test_translation(vec original, float c, float d)
{
    float vec1[3][1];
    vec new;
    vec1[0][0] = original.x;
    vec1[1][0] = original.y;
    vec1[2][0] = 1;
    float trans[3][3] = {
        {1, 0, c},
        {0, 1, d},
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
    display_trans(result, trans, new, original);
    return 0;
}
int start_translation(char *str, char *str2, vec og)
{
    float a, b;

    check_number(str);
    check_number(str2);
    a = atof(str);
    b = atof(str2);
    test_translation(og, a, b);
    return 0;
}
