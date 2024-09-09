/*
** EPITECH PROJECT, 2019
** test_architect
** File description:
** azrfaz
*/

#include <criterion/criterion.h>
#include "../my.h"
#include <math.h>

Test(test_translation, test_valid)
{
    vec test;
    char str1[] = "1";
    char str2[] = "2";
    test.x = 1;
    test.y = 2;
    cr_assert_eq(0, start_translation(str1, str2, test));
}
Test(test_rotation, test_valid)
{
    vec test;
    char str[] = "90";
    test.x = 1;
    test.y = 2;
    cr_assert_eq(0, start_rotation(str, test));
}
Test(test_scaling, test_valid)
{
    vec test;
    char str[] = "1";
    char str2[] = "2";
    test.x = 1;
    test.y = 2;
    cr_assert_eq(0, start_scaling(str, str2, test));
}    
Test(test_reflection, test_valid)
{
    vec test;
    char str[] = "270";
    test.x = 1;
    test.y = 2;
    cr_assert_eq(0, start_reflection(str, test));
}
Test(test_translation, big_values)
{
    vec test;
    char str1[] = "1234";
    char str2[] = "2213";
    test.x = 8331;
    test.y = 1301;
    cr_assert_eq(0, start_translation(str1, str2, test));
}
Test(test_rotation, big_values)
{
    vec test;
    char str[] = "900";
    test.x = 131131;
    test.y = 231013;
    cr_assert_eq(0, start_rotation(str, test));
}
Test(test_scaling, big_values)
{
    vec test;
    char str[] = "14141";
    char str2[] = "233131";
    test.x = 13131314;
    test.y = 213141;
    cr_assert_eq(0, start_scaling(str, str2, test));
}
Test(test_reflection, big_values)
{
    vec test;
    char str[] = "270113";
    test.x = 13131;
    test.y = 2414114;
    cr_assert_eq(0, start_reflection(str, test));
}

