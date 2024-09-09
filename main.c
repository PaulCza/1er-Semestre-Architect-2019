/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** afdaz
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include <math.h>
int main(int argc, char *argv[])
{
    double c, d;
    vec og;
    if (argc == 2 && argv[1][1] == 'h'){
        helper();
        exit(1);
    }
    if (argc < 4)
        exit (84);
    check_number(argv[1]);
    check_number(argv[2]);
    og.x = atof(argv[1]);
    og.y = atof(argv[2]);
    switch (argv[3][1]){
    case 't':
        if (argc == 6) {
            start_translation(argv[4], argv[5], og);
        }else{
            exit(84);
        }
        break;
    case 'z':
        if (argc == 6){
            start_scaling(argv[4], argv[5], og);
        } else {
            exit (84);
        }
        break;
    case 'r':
        if (argc == 5){
            start_rotation(argv[4], og);
        } else {
            exit (84);
        }
        break;
    case 's':
        if (argc == 5){
            start_reflection(argv[4], og);
        } else {
            exit (84);
        }
        break;
    }
    return 0;
}
