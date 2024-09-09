/*
** EPITECH PROJECT, 2019
** rotation.c
** File description:
** dazd
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include <math.h>

void display_rotation(float *result, float *trans, float c , vec og)
{
    printf("Rotation by a %.0f degree angle\n", c);
    printf("%.2f %.2f %.2f %.2f\n", trans[0], trans[1], trans[2], trans[3]);
    printf("%.2f %.2f %.2f %.2f\n", trans[4], trans[5], trans[6], trans[7]);
    printf("%.2f %.2f %.2f %.2f\n", trans[8], trans[9], trans[10], trans[11]);
    printf("%.2f %.2f %.2f %.2f\n", trans[12], trans[13], trans[14], trans[15]);
    printf("(%.2f, %.2f, %.2f) =>", og.x, og.y, og.z);
    printf(" (%.2f, %.2f, %.2f)\n", result[0], result[1], result[2]);
}
int test_rotation(vec original, double c, double d)
{
       float vec1[4][1];
    vec new;
    vec1[0][0] = original.x;
    vec1[1][0] = original.y;
    vec1[2][0] = original.z;
    vec1[3][0] = 1;
    float trans[4][4] = {
        {1, 0, 0, 0},
        {0, cos(d), -sin(d), 0},
        {0, sin(d), cos(d), 0},
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
    display_rotation(result, trans, c, original);
    return 0;
}
int start_rotation(char *str, vec og)
{
    double a, b;

    check_number(str);
    a = atof(str);
    b = a * M_PI / 180;
    test_rotation(og, a, b);
    return 0;
    
}
