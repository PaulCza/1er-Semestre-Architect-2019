/*
** EPITECH PROJECT, 2019
** azdaz
** File description:
** dxad
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct vector{
    float x;
    float y;
} vec;

int main(int argc, char *argv[]);
int check_number(char *str);
void helper(void);
void display_trans(float *result, float *trans, vec new,
                   vec og);
int test_translation(vec original, float c, float d);
int start_translation(char *str, char *str2, vec og);
void display_reflection(float *result, float *trans, float c,
                        vec og);
int test_reflection(vec original, double c, double d);
int start_reflection(char *str, vec og);
void display_rotation(float *result, float *trans, float c,
                      vec og);
int test_rotation(vec original, double c, double d);
int start_rotation(char *str, vec og);
void display_scaling(float *result, float *trans, vec new,
                     vec og);
int test_scaling(vec original, float c, float d);
    int start_scaling(char *str, char *str2, vec og);
