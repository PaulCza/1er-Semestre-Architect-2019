/*
** EPITECH PROJECT, 2019
** translation
** File description:
** dd
*/

#include "my.h"
void display_trans(float *result, float *trans, vec new, vec og)
{
    printf("Translation along vector (%.0f, %.0f, %.0f)\n", new.x, new.y, new.z);
    printf("%.2f %.2f %.2f %.2f\n", trans[0], trans[1], trans[2], trans[3]);
    printf("%.2f %.2f %.2f %.2f\n", trans[4], trans[5], trans[6], trans[7]);
    printf("%.2f %.2f %.2f %.2f\n", trans[8], trans[9], trans[10], trans[11]);
    printf("%.2f %.2f %.2f %.2f\n", trans[12], trans[13], trans[14], trans[15]);
    printf("(%.2f, %.2f, %.2f) =>", og.x, og.y, og.z);
    printf(" (%.2f, %.2f, %.2f)\n", result[0], result[1], result[2]);
}
int test_translation(vec original, float c, float d, float e)
{
    float vec1[4][1];
    vec new;
    vec1[0][0] = original.x;
    vec1[1][0] = original.y;
    vec1[2][0] = original.z;
    vec1[3][0] = 1;
    float trans[4][4] = {
        {1, 0, 0, c},
        {0, 1, 0, d},
        {0, 0, 1, e},
        {0, 0, 0, 1},
    };
    float result[4][1];
    result[0][0] = (vec1[0][0] * trans[0][0])
     + (vec1[1][0] * trans[0][1]) + (vec1[2][0] * trans[0][2])
        + (vec1[3][0] * trans[0][3]);
    result[1][0] = (vec1[0][0] * trans[1][0])
     + (vec1[1][0] * trans[1][1]) + (vec1[2][0] * trans[1][2])
        + (vec1[3][0] * trans[1][3]);
    result[2][0] = (vec1[0][0] * trans[2][0])
        + (vec1[1][0] * trans[2][1]) + (vec1[2][0] * trans[2][2])
        + (vec1[3][0] * trans[2][3]);
    result[3][0] = 1;
    new.x = c;
    new.y = d;
    new.z = e;
    display_trans(result, trans, new, original);
    return 0;
}
int start_translation(char *str, char *str2, char *str3, vec og)
{
    float a, b, c;

    check_number(str);
    check_number(str2);
    check_number(str3);
    a = atof(str);
    b = atof(str2);
    c = atof(str3);
    test_translation(og, a, b, c);
    return 0;
}
