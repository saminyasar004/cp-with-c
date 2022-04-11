/**
 * Title: Ultra Fast Mathematician
 * Description: https://codeforces.com/problemset/problem/61/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void binary_to_decimal(int binary) {
    char *string_binary = (char *)binary;
    // int length = strlen(string_binary);
    printf("%s\n", string_binary);
    // printf("%d\n%d\n", binary, length);
}

void main(void) {
    binary_to_decimal(11100);
}

int sol(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    unsigned char result;
    result = (unsigned char)a ^ (unsigned char)b;
    printf("a = %d, b = %d\nresult = %d\n", a, b, result);
    return 0;
}
/* 
10101001
01001011
 */