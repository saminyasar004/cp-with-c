/**
 * Title: Second Largest
 * Description: https://www.codechef.com/problems/FLOW017
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int test_case = 0;
    scanf("%d", &test_case);
    int result[test_case];
    for(int i = 0; i < test_case; i++) {
        // code here...
        int nums[3];
        for(int i = 0; i < 3; i++) {
            scanf("%d", &nums[i]);
        }
        printf("\n");
        for(int i = 0; i < 3; i++) {
            printf("%d ", nums[i]);
        }
    }
}