/**
 * Title: Reverse number
 * Description: https://www.codechef.com/problems/FLOW007
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    int test_case = 0;
    scanf("%d", &test_case);
    char *results[test_case];
    for(int i = 1; i <= test_case; i++) {
        int num;
        scanf("%d", &num);
        // results[i] = "";
        char *reversed = "";
        while(num > 0) {
            strcat(reversed, (char)(num % 10));
            // printf("%d ", (char)(num % 10));
            printf("%s ", reversed);
            num /= 10;
        }
        printf("\n");
    }
    // for(int i = 1; i <= test_case; i++) {
    //     printf("%s\n", results[i]);
    // }
} 