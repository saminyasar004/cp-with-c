/**
 * Title: Beautiful Matrix
 * Description: https://codeforces.com/problemset/problem/263/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS 5
#define COLS 5

void main(void) {
    int matrix[ROWS][COLS];
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    unsigned int result;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            if(matrix[i][j] == 1) {
                result = abs(i - j);
            }
        }
    }
    printf("%u\n", result);
}