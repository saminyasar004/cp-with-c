/**
 * Title: way too long words
 * Description: https://codeforces.com/problemset/problem/71/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    int test_case = 0;
    scanf("%d", &test_case);
    char results[test_case][1000];
    for(int i = 0; i < test_case; i++) {
        // code here...
        char word[1000];
        scanf("%s", word);
        int length = (int)strlen(word);
        if(length > 10) {
            // ! SOLVE IT...
        } else {
            strcpy(results[i], word);
            printf("%s\n", word);
        }
    }
    for(int i = 0; i < test_case; i++) {
        printf("%s\n", results[i]);
    }
}