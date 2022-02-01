/**
 * Title: Team
 * Description: https://codeforces.com/problemset/problem/231/A
 * Author: Samin Yasar
 * Date: 28/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  int count = 0;
  while (testCase > 0) {
    int r1, r2, r3;
    scanf("%d %d %d", &r1, &r2, &r3);
    if (r1 + r2 + r3 >= 2) {
      count++;
    }
    testCase--;
  }
  printf("%d\n", count);
  return 0;
}