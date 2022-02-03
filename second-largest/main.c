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
    int results[test_case];
    for(int i = 0; i < test_case; i++) {
        // code here...
        int length = 3;
        int nums[length];
        int first_largest = 0, second_largest = 0;
        for(int i = 0; i < length; i++) {
            scanf("%d", &nums[i]);
        }
        for(int i = 0; i < length; i++) {
            if(nums[i] > first_largest) {
            first_largest = nums[i];
            }
        }
        for(int i = 0; i < length; i++) {
            if(nums[i] > second_largest && nums[i] != first_largest) {
            second_largest = nums[i];
            }
        }
        results[i] = second_largest;
    }
    for(int i = 0; i < test_case; i++) {
        printf("%d\n", results[i]);
    }
}