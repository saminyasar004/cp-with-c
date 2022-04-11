/**
 * Title: Wrong Substraction
 * Description: https://codeforces.com/problemset/problem/977/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++) {
        if((n % 10) == 0) {
            n /= 10;
        } else if((n % 10) != 0) {
            n -= 1;
        }
    }
    printf("%d\n", n);
    return 0;
}