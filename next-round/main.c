/**
 * Title: Next Round
 * Description: https://codeforces.com/problemset/problem/158/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // code here...
    int count = 0;
    int n, k;
    scanf("%d %d", &n, &k);
    int scores[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    int k_score = scores[k - 1];
    for(int i = 0; i < n; i++) {
        if(scores[i] > 0 && scores[i] >= k_score) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}