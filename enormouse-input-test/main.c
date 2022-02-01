/**
 * Title: Enormouse input test
 * Description: https://www.codechef.com/problems/INTEST
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>

int main(void) {
  long n, k, count;
  count = 0;
  scanf("%ld %ld", &n, &k);
  while (n > 0) {
    long testCase;
    scanf("%ld", &testCase);
    if (testCase % k == 0) {
      count++;
    }
    n--;
  }
  printf("%ld\n", count);
  return 0;
}