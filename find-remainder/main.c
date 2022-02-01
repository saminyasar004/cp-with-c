/**
 * Title: Find remainder
 * Description: https://www.codechef.com/problems/FLOW002
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  long remainders[testCase];
  int currentTestCase = 0;
  while (testCase > 0) {
    // code here...
    long a, b;
    scanf("%ld %ld", &a, &b);
    remainders[currentTestCase] = a % b;
    currentTestCase++;
    testCase--;
  }
  for (int i = 0; i < currentTestCase; i++) {
    printf("%ld\n", remainders[i]);
  }
  return 0;
}