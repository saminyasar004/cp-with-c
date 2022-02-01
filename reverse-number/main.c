/**
 * Title: Reverse number
 * Description: https://www.codechef.com/problems/FLOW007
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int test_case = 0;
    scanf("%d", &test_case);
    int current_test_case = 0;
    char reveresed_chars[test_case][1000];
    while (test_case > 0) {
        // code here...
        char nums[1000];
        scanf("%s", nums);
        int length = (int)strlen(nums);
        char reveresed[length];
        for(int i = (length - 1); i >= 0; i--) {
          reveresed[i] = nums[((length - 1) - i)];
        }
        strcpy(reveresed_chars[current_test_case], reveresed);
        printf("reveresed - %d\n", atoi(reveresed_chars[current_test_case]));
        current_test_case++;
        test_case--;
    }
    // for(int i = 0; i < current_test_case; i++) {
    //     printf("%d\n", atoi(results[i]));
    // }
    return 0;
}