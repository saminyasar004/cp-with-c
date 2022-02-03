#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int rows;
    printf("How many rows? ");
    scanf("%d", &rows);
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            printf(" ");
        }
        for(int j = 0; j < (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/**
    Full Pyramid
         *
        * *
      * * * *
    * * * * * *
*/